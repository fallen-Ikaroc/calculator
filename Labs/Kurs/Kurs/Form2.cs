using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;
using System.Drawing.Printing;
using System.Data.SqlClient;

namespace Kurs
{
    internal partial class Form2 : Form
    {
        private readonly Form1 main;
        private string result { get; set; }
        private int med { get; set; }

        delegate void ErrorMessage(Exception ex);

        private void errorMessage(Exception ex)
        {
            if (ex != null)
                MessageBox.Show("There was a problem. Try again or contact the developers. Error info:" + ex.Message, "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
            else
                MessageBox.Show("There was a failure and we don't know what happened yet.", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
        }
        public Form2(Form1 _main)
        {
            main = _main;
            InitializeComponent();
        }

        private void Form2_Load(object sender, EventArgs e)
        {
            string[] s = {main.medicine.Text.ToString(),main.analogue.Text.ToString()};
            recipe.Text = 
                "Patient: " + main.name.Text.ToString() + "\n" + 
                "Desease: " + main.disease.Text.ToString() + "\n" + 
                "Symptoms: " + main.comboBox1.SelectedItem.ToString() + "\n";
            Medicine.Items.AddRange(s);
            date.Text = DateTime.Now.ToShortDateString();
        }

        private void Medicine_SelectedIndexChanged(object sender, EventArgs e)
        {
            med = Medicine.SelectedIndex;
            if (Medicine.SelectedItem.ToString() == main.medicine.Text.ToString())
                quantity.Text = "Quantity: " + main.quantity.Text + "   Need: ";
            if (Medicine.SelectedItem.ToString() == main.analogue.Text.ToString())
                quantity.Text = "Quantity: " + main.quantity2.Text + "   Need: ";
            for (int j = 0; j < main.PdataSet.Tables[0].Rows.Count; j++)
                if (main.PdataSet.Tables[0].Rows[j]["medicines"].Equals(main.medicine.Text))
                    quantity.Text += main.PdataSet.Tables[0].Rows[j]["quantity"].ToString();
            if (quantity.Text != "")
                save.Enabled = print.Enabled = true;
        }

        private async void save_Click(object sender, EventArgs e)
        {
            string filename = main.name.Text + "_" + DateTime.Now.ToString("HH.mm") + "_" + DateTime.Now.ToString("dd/MM/yy") + ".txt";
            try
            {
                using (StreamWriter f = new StreamWriter(filename, false, Encoding.GetEncoding(1251)))
                {
                    await f.WriteLineAsync("Patient: " + main.name.Text);
                    await f.WriteLineAsync("Desease: " + main.disease.Text);
                    await f.WriteLineAsync("Symptoms: " + main.comboBox1.SelectedItem.ToString());
                    await f.WriteLineAsync("Medicine: " + Medicine.SelectedItem.ToString());
                    await f.WriteLineAsync(quantity.Text.ToString());
                }
                MessageBox.Show("Recipe saved!", "Notice", MessageBoxButtons.OK, MessageBoxIcon.Information);
            }
            catch(Exception ex)
            {
                ErrorMessage error = errorMessage;
                error(ex);
            }
        }

        private void close_Click(object sender, EventArgs e)
        {
            Close();
        }

        private async void print_Click(object sender, EventArgs e)
        {
            try
            {
                result = "Patient: " + main.name.Text.ToString() + "\n" + "Desease: " + main.disease.Text.ToString() + "\n" +
                "Symptoms: " + main.comboBox1.SelectedItem.ToString() + "\n" + "Medicine: " + Medicine.SelectedItem.ToString() + "\n";
                PrintDocument printDocument = new PrintDocument();
                printDocument.PrintPage += PrintPageHandler;
                PrintDialog printDialog = new PrintDialog()
                {
                    Document = printDocument
                };
                if (printDialog.ShowDialog() == DialogResult.OK)
                    printDialog.Document.Print();
            }
            catch(Exception ex)
            {
                ErrorMessage error = errorMessage;
                error(ex);
            }
        }

        private void PrintPageHandler(object sender, PrintPageEventArgs e)
        {
            e.Graphics.DrawString(result, new Font("Arial", 14), Brushes.Black, 0, 0);
        }

        private async void outMedicine_Click(object sender, EventArgs e)
        {
            int qnt, size=0;
            try
            {
                for (int i = 0; i < main.PdataSet.Tables[1].Rows.Count; i++)
                {
                    if (main.PdataSet.Tables[1].Rows[i]["name"].ToString() == Medicine.SelectedItem.ToString())
                    {
                        qnt = Convert.ToInt32(main.PdataSet.Tables[1].Rows[i]["quantity"].ToString());
                        for(int j=0; j< main.PdataSet.Tables[0].Rows.Count; j++)
                            if(main.PdataSet.Tables[0].Rows[j]["name"].ToString() == main.disease.Text.ToString())
                                size = Convert.ToInt32(main.PdataSet.Tables[0].Rows[j]["quantity"].ToString());
                        qnt -= size;
                        main.PdataSet.Tables[1].Rows[i]["quantity"] = qnt;
                        using (SqlConnection connection = new SqlConnection(main.PconnectionString))
                        {
                            await connection.OpenAsync();
                            main.Padapter = new SqlDataAdapter(main.Psql, connection);
                            main.PcommandBuilder = new SqlCommandBuilder(main.Padapter);
                            main.Padapter.Update(main.PdataSet);
                            main.Connection();
                        }
                        for(int j=0; j<main.PdataSet.Tables[1].Rows.Count; j++)
                        {
                            if (med == 0 && main.PdataSet.Tables[1].Rows[j]["name"].ToString() == Medicine.SelectedItem.ToString())
                                main.quantity.Text = main.PdataSet.Tables[1].Rows[j]["quantity"].ToString();
                            if (med == 1 && main.PdataSet.Tables[1].Rows[j]["name"].ToString() == Medicine.SelectedItem.ToString()) 
                                main.quantity2.Text = main.PdataSet.Tables[1].Rows[j]["quantity"].ToString();
                        }
                        Medicine_SelectedIndexChanged(null, null);
                    }
                }
                MessageBox.Show("The medicine has been dispensed successfully!", "Notice", MessageBoxButtons.OK, MessageBoxIcon.Information);
            }
            catch (Exception ex)
            {
                ErrorMessage error = errorMessage;
                error(ex);
            }
        }
    }
}
