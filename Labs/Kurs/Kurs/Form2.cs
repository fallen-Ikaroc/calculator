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
    public partial class Form2 : Form
    {
        private string result;
        Form1 main;
        public Form2()
        {
            InitializeComponent();
        }

        private void Form2_Load(object sender, EventArgs e)
        {
            main = this.Owner as Form1;

            string[] s = {main.medicine.Text.ToString(),main.analogue.Text.ToString()};
            recipe.Text = "Patient: " + main.name.Text + "\n" + "Desease: " + main.disease.Text + "\n" +
                "Symptoms: " + main.comboBox1.SelectedItem.ToString() + "\n";
            Medicine.Items.AddRange(s);
            date.Text = DateTime.Now.ToString("dd MMMM yyyy");
        }

        private void Medicine_SelectedIndexChanged(object sender, EventArgs e)
        {
            string selectedState = Medicine.SelectedItem.ToString();
            if (selectedState == main.medicine.Text.ToString())
            {
                quantity.Text = "Quantity: " + main.quantity.Text.ToString() + "   Need: ";
            }
            if (selectedState == main.analogue.Text.ToString())
            {
                quantity.Text = "Quantity: " + main.quantity2.Text.ToString() + "   Need: ";
            }
            for (int j = 0; j < main.table.Rows.Count; j++)
                if (main.table.Rows[j]["medicines"].ToString() == main.medicine.Text.ToString())
                    quantity.Text += main.table.Rows[j]["quantity"].ToString();

            if (quantity.Text != "")
            {
                save.Enabled = true;
                print.Enabled = true;
            }
        }

        private void save_Click(object sender, EventArgs e)
        {
            string filename = main.name.Text.ToString() + "_" + DateTime.Now.ToString("HH.mm") + "_" + DateTime.Now.ToString("dd/MM/yy") + ".txt";
            using (StreamWriter f = new StreamWriter(filename, false, Encoding.GetEncoding(1251)))
            {
                f.WriteLine("Patient: " + main.name.Text);
                f.WriteLine("Desease: " + main.disease.Text);
                f.WriteLine("Symptoms: " + main.comboBox1.SelectedItem.ToString());
                f.WriteLine("Medicine: " + Medicine.SelectedItem.ToString());
                f.WriteLine(quantity.Text.ToString());
            }
            MessageBox.Show("Recipe saved!", "Notice", MessageBoxButtons.OK, MessageBoxIcon.Information);
        }

        private void close_Click(object sender, EventArgs e)
        {
            Close();
        }

        private void print_Click(object sender, EventArgs e)
        {
            result = "Patient: " + main.name.Text.ToString() + "\n" + "Desease: " + main.disease.Text.ToString() + "\n" +
                "Symptoms: " + main.comboBox1.SelectedItem.ToString() + "\n" + "Medicine: " + Medicine.SelectedItem.ToString() + "\n";
            PrintDocument printDocument = new PrintDocument();
            printDocument.PrintPage += PrintPageHandler;
            PrintDialog printDialog = new PrintDialog();
            printDialog.Document = printDocument;
            if (printDialog.ShowDialog() == DialogResult.OK)
                printDialog.Document.Print();
        }
        void PrintPageHandler(object sender, PrintPageEventArgs e)
        {
            // печать строки result
            e.Graphics.DrawString(result, new Font("Arial", 14), Brushes.Black, 0, 0);
        }

        private void dispense_Click(object sender, EventArgs e)
        {
            SqlCommand sql = new SqlCommand("UPDATE medicines ");
        }

        private void quantity_Click(object sender, EventArgs e)
        {

        }

        private void recipe_Click(object sender, EventArgs e)
        {

        }
    }
}
