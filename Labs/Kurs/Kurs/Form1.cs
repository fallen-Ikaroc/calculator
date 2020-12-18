using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Kurs
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            // TODO: данная строка кода позволяет загрузить данные в таблицу "database1DataSet.medicines". При необходимости она может быть перемещена или удалена.
            this.medicinesTableAdapter.Fill(this.database1DataSet.medicines);
            // TODO: данная строка кода позволяет загрузить данные в таблицу "database1DataSet.illness". При необходимости она может быть перемещена или удалена.
            this.illnessTableAdapter.Fill(this.database1DataSet.illness);

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
