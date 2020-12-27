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
using System.Configuration;

namespace Kurs
{
    internal partial class Form1 : Form
    {
        private readonly string connectionString = ConfigurationManager.ConnectionStrings["Kurs.Properties.Settings.Database1ConnectionString"].ConnectionString;
        private readonly string sql = "SELECT * FROM illness; SELECT * FROM medicines";
        private SqlDataAdapter adapter { get; set; }
        private DataSet dataSet { get; set; }
        private SqlCommandBuilder commandBuilder { get; set; }
        private BindingList<string> desease { get; set; }

        internal string PconnectionString => connectionString;

        internal string Psql => sql;

        internal SqlDataAdapter Padapter
        {
            get => adapter;
            set => adapter = value;
        }

        internal DataSet PdataSet
        {
            get => dataSet;
            set => dataSet = value;
        }

        internal SqlCommandBuilder PcommandBuilder
        {
            get => commandBuilder;
            set => commandBuilder = value;
        }

        internal Form1()
        {
            dataSet = new DataSet("dataset");
            desease = new BindingList<string>();
            InitializeComponent();
        }

        delegate void ErrorMessage(Exception ex);

        private void errorMessage(Exception ex)
        {
            if (ex != null)
                MessageBox.Show("There was a problem. Try again or contact the developers. Error info:" + ex.Message, "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
            else
                MessageBox.Show("There was a failure and we don't know what happened yet.", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            Connection();
        }

        internal async void Connection()
        {
            try
            {
                if (desease != null)
                    desease.Clear();
                if (dataSet.DataSetName == "dataset")
                {
                    using (SqlConnection connection = new SqlConnection(connectionString))
                    {
                        dataSet.DataSetName = "DataBase";
                        await connection.OpenAsync();
                        adapter = new SqlDataAdapter(sql, connection);
                        adapter.Fill(dataSet);
                    }
                    dataGridView1.DataSource = dataSet.Tables[0];
                    dataGridView2.DataSource = dataSet.Tables[1];
                }
                for (int i = 0; i < dataSet.Tables[0].Rows.Count; i++)
                    desease.Add(dataSet.Tables[0].Rows[i]["symptoms"].ToString());
                comboBox1.DataSource = desease;
            }
            catch(Exception ex)
            {
                ErrorMessage error = errorMessage;
                error(ex);
            }
        }

        private void name_TextChanged(object sender, EventArgs e)
        {
            form_recipe.Enabled = name.Text.ToString().Length >= 3;
        }

        private void name_KeyPress(object sender, KeyPressEventArgs e)
        {
            alert.Text = "Please enter latin symbols!";
            if (((e.KeyChar >= 'A') && (e.KeyChar <= 'z')) || (Char.IsControl(e.KeyChar)))
            {
                alert.Text = string.Empty;
                if (e.KeyChar == (char)Keys.Enter)
                    form_recipe.Focus();
                return;
            }
            e.Handled = true;
        }

        internal void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (comboBox1.SelectedIndex != -1)
            {
                for (int i = 0; i < dataSet.Tables[0].Rows.Count; i++)
                    if (dataSet.Tables[0].Rows[i]["symptoms"].Equals(comboBox1.SelectedItem))
                    {
                        disease.Text = dataSet.Tables[0].Rows[i]["name"].ToString();
                        medicine.Text = dataSet.Tables[0].Rows[i]["medicines"].ToString();
                        for (int j = 0; j < dataSet.Tables[1].Rows.Count; j++)
                            if (dataSet.Tables[0].Rows[i]["medicines"].Equals(dataSet.Tables[1].Rows[j]["name"]))
                            {
                                quantity.Text = dataSet.Tables[1].Rows[j]["quantity"].ToString();
                                analogue.Text = dataSet.Tables[1].Rows[j]["analog"].ToString();
                                for (int k = 0; k < dataSet.Tables[1].Rows.Count; k++)
                                    if (dataSet.Tables[1].Rows[k]["name"].Equals(dataSet.Tables[1].Rows[j]["analog"]))
                                        quantity2.Text = dataSet.Tables[1].Rows[k]["quantity"].ToString();
                            }
                    }
                label_disease.Visible = label_medicine.Visible = label_quantity.Visible = label_analogue.Visible = label_quantity2.Visible = form_recipe.Visible = true;
            }
        }

        private void form_recipe_Click(object sender, EventArgs e)
        {
            Form2 form2 = new Form2(this);
            form2.ShowDialog();

            label_disease.Visible = label_medicine.Visible = label_quantity.Visible = label_analogue.Visible = label_quantity2.Visible = form_recipe.Visible = false;
            comboBox1.SelectedIndex = -1;
            name.Text=disease.Text = medicine.Text = quantity.Text = analogue.Text = quantity2.Text = "";
        }

        private void save_Click(object sender, EventArgs e)
        {
            Updatedb();
        }

        private async void Updatedb()
        {
            try
            {
                using (SqlConnection connection = new SqlConnection(connectionString))
                {
                    await connection.OpenAsync();
                    adapter = new SqlDataAdapter(sql, connection);
                    commandBuilder = new SqlCommandBuilder(adapter);
                    adapter.Update(dataSet);
                    Connection();
                    MessageBox.Show("Table saved!", "Notice", MessageBoxButtons.OK, MessageBoxIcon.Information);
                }
            }
            catch (Exception ex)
            {
                ErrorMessage error = errorMessage;
                error(ex);
            }
        }

        private void add_Click(object sender, EventArgs e)
        {
            int tag = Convert.ToInt32(((Button)(sender)).Tag.ToString());
            DataRow row = dataSet.Tables[tag].NewRow();
            dataSet.Tables[tag].Rows.Add(row);    
        }

        private void delete_Click(object sender, EventArgs e)
        {
            try
            {
                int count = 0;
                foreach (DataGridViewRow row in dataGridView1.SelectedRows)
                {
                    dataGridView1.Rows.Remove(row);
                    count++;
                }
                if (count == 0)
                    throw new Exception("Not a single line was highlighted!");
            }
            catch(Exception ex)
            {
                ErrorMessage error = errorMessage;
                error(ex);
            }
        }

        private void delete1_Click(object sender, EventArgs e)
        {
            try
            {
                int count = 0;
                foreach (DataGridViewRow row in dataGridView2.SelectedRows)
                {
                    dataGridView2.Rows.Remove(row);
                    count++;
                }
                if (count == 0)
                    throw new Exception("Not a single line was highlighted!");
            }
            catch(Exception ex)
            {
                ErrorMessage error = errorMessage;
                error(ex);
            }
        }

        private void dataGridView1_CellValidating(object sender, DataGridViewCellValidatingEventArgs e)
        {
            if (e.ColumnIndex == 0 || e.ColumnIndex == 5)
            {
                if (e.FormattedValue.ToString() == string.Empty)
                    return;
                if (!int.TryParse(e.FormattedValue.ToString(), out _))
                {
                    dataGridView1.Rows[e.RowIndex].Cells[e.ColumnIndex].Value = string.Empty;
                    e.Cancel = true;
                    return;
                }
            }
        }

        private void dataGridView2_CellValidating(object sender, DataGridViewCellValidatingEventArgs e)
        {
            if (e.ColumnIndex == 0 || e.ColumnIndex == 2)
            {
                if (e.FormattedValue.ToString() == string.Empty)
                    return;
                if (!int.TryParse(e.FormattedValue.ToString(), out _))
                {
                    dataGridView2.Rows[e.RowIndex].Cells[e.ColumnIndex].Value = string.Empty;
                    e.Cancel = true;
                    return;
                }
            }
        }

        private void dataGridView1_DataError(object sender, DataGridViewDataErrorEventArgs e)
        {
            ErrorMessage error = errorMessage;
            error(e.Exception);
        }

        private void dataGridView2_DataError(object sender, DataGridViewDataErrorEventArgs e)
        {
            ErrorMessage error = errorMessage;
            error(e.Exception);
        }
    }
}
