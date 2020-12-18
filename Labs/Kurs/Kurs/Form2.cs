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
namespace Kurs
{
    public partial class Form2 : Form
    {
        Form1 main;
        public Form2()
        {
            InitializeComponent();
        }

        private void Form2_Load(object sender, EventArgs e)
        {
            main = this.Owner as Form1;

            string[] s = {main.medicine.Text.ToString(),main.analogue.Text.ToString()};
            recipe.Text ="Desease: " + main.disease.Text+"\n\n"+
                "Symptoms: " + main.comboBox1.SelectedItem.ToString()+"\n";
            Medicine.Items.AddRange(s);
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
                save.Enabled = true;
        }

        private void save_Click(object sender, EventArgs e)
        {
            string filename = main.disease.Text.ToString()+"_" + DateTime.Now.ToString("HH.mm.ss")+"_"+ DateTime.Now.ToString("ddMMMMyyyy") + ".txt";
            using (StreamWriter f = new StreamWriter(filename, false, Encoding.GetEncoding(1251)))
            {
                f.WriteLine(recipe.Text.ToString());
                f.WriteLine("Medicine: " + Medicine.SelectedItem.ToString());
                f.WriteLine(quantity.Text.ToString());
            }
        }
    }
}
