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
        //string connectionString = @"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename=C:\Users\Vlad\Documents\GitHub\calculator\Labs\Kurs\Kurs\Database1.mdf;Integrated Security=True";
        public string connectionString = @"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename=E:\Git\calculator\Labs\Kurs\Kurs\Database1.mdf;Integrated Security=True";
        public string sql = "SELECT * FROM illness";
        public string sql_ = "SELECT * FROM medicines";
        public SqlDataAdapter adapter, adapter_;
        public DataSet ds, ds_;
        public DataTable table, table_;
        public SqlCommandBuilder commandBuilder;
        public Form1()
        {
            InitializeComponent();
            Connection();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            Former();
        }

        public void Connection()
        {
            using (SqlConnection connection = new SqlConnection(connectionString))
            {
                connection.Open();
                adapter = new SqlDataAdapter(sql, connection);
                adapter_ = new SqlDataAdapter(sql_, connection);

                ds = new DataSet();
                ds_ = new DataSet();

                adapter.Fill(ds);
                adapter_.Fill(ds_);

                dataGridView1.DataSource = ds.Tables[0];
                dataGridView2.DataSource = ds_.Tables[0];

                table = new DataTable();
                table_ = new DataTable();
                adapter.Fill(table);
                adapter_.Fill(table_);
            }
        }

        public void Former()
        {
            comboBox1.Items.Clear();
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

        private void name_TextChanged(object sender, EventArgs e)
        {
            if (name.Text.ToString().Length >= 3)
                form_recipe.Enabled = true;
            else
                form_recipe.Enabled = false;
        }

        private void name_KeyPress(object sender, KeyPressEventArgs e)
        {
            if ((e.KeyChar >= 'A') && (e.KeyChar <= 'z'))
                return;
            if (Char.IsControl(e.KeyChar))
            {
                if (e.KeyChar == (char)Keys.Enter)
                    form_recipe.Focus();
                return;
            }
            e.Handled = true;
        }

        public void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
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
            label_disease.Visible = label_medicine.Visible = label_quantity.Visible = label_analogue.Visible = label_quantity2.Visible = form_recipe.Visible = true;
        }

        private void form_recipe_Click(object sender, EventArgs e)
        {
            Form2 form2 = new Form2();
            form2.Owner = this;
            form2.ShowDialog();
        }

        private void save_Click(object sender, EventArgs e)
        {
            try
            {
                using (SqlConnection connection = new SqlConnection(connectionString))
                {
                    connection.Open();
                    adapter = new SqlDataAdapter(sql, connection);
                    commandBuilder = new SqlCommandBuilder(adapter);

                    adapter.Update(ds);
                    Connection();
                    Former();

                    MessageBox.Show("Table saved!", "Notice", MessageBoxButtons.OK, MessageBoxIcon.Information);
                }
            }
            catch
            {
                MessageBox.Show("Fill the row before saving!", "Notice", MessageBoxButtons.OK, MessageBoxIcon.Warning);
            }
        }
        private void add_Click(object sender, EventArgs e)
        {
            DataRow row = ds.Tables[0].NewRow();
            ds.Tables[0].Rows.Add(row);
        }

        private void delete_Click(object sender, EventArgs e)
        {
            bool error = true;
            foreach (DataGridViewRow row in dataGridView1.SelectedRows)
            {
                dataGridView1.Rows.Remove(row);
                error = false;
            }
            if (error)
                MessageBox.Show("Select the line to delete!", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
        }

        private void dataGridView1_CellValidating(object sender, DataGridViewCellValidatingEventArgs e)
        {
            int res;
            if (e.ColumnIndex == 0 || e.ColumnIndex == 5)
            {
                if (e.FormattedValue.ToString() == string.Empty)
                    return;
                if (!int.TryParse(e.FormattedValue.ToString(), out res))
                {
                    dataGridView1.Rows[e.RowIndex].Cells[e.ColumnIndex].Value = string.Empty;
                    e.Cancel = true;
                    return;
                }
            }
        }

        private void dataGridView2_CellValidating(object sender, DataGridViewCellValidatingEventArgs e)
        {
            int res;
            if (e.ColumnIndex == 0 || e.ColumnIndex == 2)
            {
                if (e.FormattedValue.ToString() == string.Empty)
                    return;
                if (!int.TryParse(e.FormattedValue.ToString(), out res))
                {
                    dataGridView2.Rows[e.RowIndex].Cells[e.ColumnIndex].Value = string.Empty;
                    e.Cancel = true;
                    return;
                }
            }
        }

        private void dataGridView1_DataError(object sender, DataGridViewDataErrorEventArgs e)
        {
            MessageBox.Show("Incorrect data! Please reenter!", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
        }

        private void dataGridView2_DataError(object sender, DataGridViewDataErrorEventArgs e)
        {
            MessageBox.Show("Incorrect data! Please reenter!", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
        }

        private void save1_Click(object sender, EventArgs e)
        {
            try
            {
                using (SqlConnection connection = new SqlConnection(connectionString))
                {
                    connection.Open();
                    adapter_ = new SqlDataAdapter(sql_, connection);
                    commandBuilder = new SqlCommandBuilder(adapter_);

                    adapter_.Update(ds_);
                    Connection();
                    Former();

                    MessageBox.Show("Table saved!", "Notice", MessageBoxButtons.OK, MessageBoxIcon.Information);
                }
            }
            catch
            {
                MessageBox.Show("Fill the row before saving!", "Notice", MessageBoxButtons.OK, MessageBoxIcon.Warning);
            }
        }

        private void add1_Click(object sender, EventArgs e)
        {
            DataRow row = ds_.Tables[0].NewRow();
            ds_.Tables[0].Rows.Add(row);
        }

        private void delete1_Click(object sender, EventArgs e)
        {
            bool error = true;
            foreach (DataGridViewRow row in dataGridView2.SelectedRows)
            {
                dataGridView2.Rows.Remove(row);
                error = false;
            }
            if (error)
                MessageBox.Show("Select the line to delete!", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
        }
    }
}
//usless code
/*
for (int j = 0; j < table.Columns.Count; j++)
                    label2.Text += table.Rows[i][j].ToString() + " ";
                label2.Text += "\n";
// TODO: данная строка кода позволяет загрузить данные в таблицу "database1DataSet1.medicines". При необходимости она может быть перемещена или удалена.
            this.medicinesTableAdapter.Fill(this.database1DataSet.medicines);
            // TODO: данная строка кода позволяет загрузить данные в таблицу "database1DataSet1.illness". При необходимости она может быть перемещена или удалена.
            this.illnessTableAdapter.Fill(this.database1DataSet.illness);
illnessTableAdapter.Update(database1DataSet);
medicinesTableAdapter.Update(database1DataSet);
*/
