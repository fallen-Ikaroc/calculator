using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.SqlClient;
namespace Kurs
{
    public partial class Form1 : Form
    {
        string connectionString = @"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename=E:\Git\calculator\Labs\Kurs\Kurs\Database1.mdf;Integrated Security=True";
        public SqlDataAdapter adapter, adapter_;
        public DataSet ds, ds_;
        public DataTable table, table_;
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Form2 form2 = new Form2();
            form2.Owner = this;
            form2.ShowDialog();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            connect();
            string[] desease;
            string[] _desease;
            int count = 0;
            desease = new string[count];
            for (int i = 0; i < table.Rows.Count; i++)
            {
                string s = table.Rows[i]["symptoms"].ToString();
                count++;
                _desease = new string[count];
                for (int _i = 0; _i < _desease.Length - 1; _i++)
                    _desease[_i] = desease[_i];
                _desease[count - 1] = s;
                desease = _desease;
            }
            comboBox1.Items.AddRange(desease);
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            string selectedState = comboBox1.SelectedItem.ToString();
            for (int i = 0; i < table.Rows.Count; i++)
                if (table.Rows[i]["symptoms"].ToString() == selectedState)
                {
                    disease.Text = table.Rows[i]["name"].ToString();
                    medicine.Text = table.Rows[i]["medicines"].ToString();
                    for (int j = 0; j < table_.Rows.Count; j++)
                        if(table.Rows[i]["medicines"].ToString() == table_.Rows[j]["name"].ToString())
                        {
                            quantity.Text = table_.Rows[j]["quantity"].ToString();
                            analogue.Text = table_.Rows[j]["analog"].ToString();
                            for (int k = 0; k < table_.Rows.Count; k++)
                                if(table_.Rows[k]["name"].ToString() == table_.Rows[j]["analog"].ToString())
                                    quantity2.Text = table_.Rows[k]["quantity"].ToString();
                        }
                }     
            label_disease.Visible = label_medicine.Visible = label_quantity.Visible = label_analogue.Visible = label_quantity2.Visible = recipe.Visible = true;
        }   

        void connect()
        {
            string sql = "SELECT * FROM illness";
            string sql_ = "SELECT * FROM medicines";
            using (SqlConnection connection = new SqlConnection(connectionString))
            {
                connection.Open();
                adapter = new SqlDataAdapter(sql, connection);
                adapter_ = new SqlDataAdapter(sql_, connection);
                ds = new DataSet();
                ds_ = new DataSet();
                table = new DataTable();
                table_ = new DataTable();
                adapter.Fill(ds);
                adapter_.Fill(ds_);
                adapter.Fill(table);
                adapter_.Fill(table_);
                dataGridView1.DataSource = ds.Tables[0];
                dataGridView2.DataSource = ds_.Tables[0];
            }
        }
    }
}
//usless code
/*
for (int j = 0; j < table.Columns.Count; j++)
                    label2.Text += table.Rows[i][j].ToString() + " ";
                label2.Text += "\n";

*/