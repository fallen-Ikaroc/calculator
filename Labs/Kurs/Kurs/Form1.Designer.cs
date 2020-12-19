
namespace Kurs
{
    partial class Form1
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            this.tabControl1 = new System.Windows.Forms.TabControl();
            this.tabPage1 = new System.Windows.Forms.TabPage();
            this.recipe = new System.Windows.Forms.Button();
            this.quantity2 = new System.Windows.Forms.Label();
            this.label_quantity2 = new System.Windows.Forms.Label();
            this.analogue = new System.Windows.Forms.Label();
            this.label_analogue = new System.Windows.Forms.Label();
            this.quantity = new System.Windows.Forms.Label();
            this.label_quantity = new System.Windows.Forms.Label();
            this.medicine = new System.Windows.Forms.Label();
            this.label_medicine = new System.Windows.Forms.Label();
            this.disease = new System.Windows.Forms.Label();
            this.label_disease = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.comboBox1 = new System.Windows.Forms.ComboBox();
            this.tabPage2 = new System.Windows.Forms.TabPage();
            this.save = new System.Windows.Forms.Button();
            this.dataGridView1 = new System.Windows.Forms.DataGridView();
            this.tabPage3 = new System.Windows.Forms.TabPage();
            this.button1 = new System.Windows.Forms.Button();
            this.dataGridView2 = new System.Windows.Forms.DataGridView();
            this.add = new System.Windows.Forms.Button();
            this.delete = new System.Windows.Forms.Button();
            this.tabControl1.SuspendLayout();
            this.tabPage1.SuspendLayout();
            this.tabPage2.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).BeginInit();
            this.tabPage3.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView2)).BeginInit();
            this.SuspendLayout();
            // 
            // tabControl1
            // 
            this.tabControl1.Controls.Add(this.tabPage1);
            this.tabControl1.Controls.Add(this.tabPage2);
            this.tabControl1.Controls.Add(this.tabPage3);
            this.tabControl1.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.tabControl1.Location = new System.Drawing.Point(12, 12);
            this.tabControl1.Name = "tabControl1";
            this.tabControl1.SelectedIndex = 0;
            this.tabControl1.Size = new System.Drawing.Size(1257, 575);
            this.tabControl1.SizeMode = System.Windows.Forms.TabSizeMode.FillToRight;
            this.tabControl1.TabIndex = 0;
            // 
            // tabPage1
            // 
            this.tabPage1.Controls.Add(this.recipe);
            this.tabPage1.Controls.Add(this.quantity2);
            this.tabPage1.Controls.Add(this.label_quantity2);
            this.tabPage1.Controls.Add(this.analogue);
            this.tabPage1.Controls.Add(this.label_analogue);
            this.tabPage1.Controls.Add(this.quantity);
            this.tabPage1.Controls.Add(this.label_quantity);
            this.tabPage1.Controls.Add(this.medicine);
            this.tabPage1.Controls.Add(this.label_medicine);
            this.tabPage1.Controls.Add(this.disease);
            this.tabPage1.Controls.Add(this.label_disease);
            this.tabPage1.Controls.Add(this.label1);
            this.tabPage1.Controls.Add(this.comboBox1);
            this.tabPage1.Location = new System.Drawing.Point(4, 29);
            this.tabPage1.Name = "tabPage1";
            this.tabPage1.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage1.Size = new System.Drawing.Size(1249, 542);
            this.tabPage1.TabIndex = 0;
            this.tabPage1.Text = "Main Page";
            this.tabPage1.UseVisualStyleBackColor = true;
            // 
            // recipe
            // 
            this.recipe.Location = new System.Drawing.Point(221, 378);
            this.recipe.Name = "recipe";
            this.recipe.Size = new System.Drawing.Size(146, 34);
            this.recipe.TabIndex = 17;
            this.recipe.Text = "Form a recipe";
            this.recipe.UseVisualStyleBackColor = true;
            this.recipe.Visible = false;
            this.recipe.Click += new System.EventHandler(this.button1_Click);
            // 
            // quantity2
            // 
            this.quantity2.AutoSize = true;
            this.quantity2.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.quantity2.Location = new System.Drawing.Point(217, 320);
            this.quantity2.Name = "quantity2";
            this.quantity2.Size = new System.Drawing.Size(0, 20);
            this.quantity2.TabIndex = 16;
            // 
            // label_quantity2
            // 
            this.label_quantity2.AutoSize = true;
            this.label_quantity2.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label_quantity2.Location = new System.Drawing.Point(76, 320);
            this.label_quantity2.Name = "label_quantity2";
            this.label_quantity2.Size = new System.Drawing.Size(126, 20);
            this.label_quantity2.TabIndex = 15;
            this.label_quantity2.Text = "Quantity in stock";
            this.label_quantity2.Visible = false;
            // 
            // analogue
            // 
            this.analogue.AutoSize = true;
            this.analogue.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.analogue.Location = new System.Drawing.Point(217, 274);
            this.analogue.Name = "analogue";
            this.analogue.Size = new System.Drawing.Size(0, 20);
            this.analogue.TabIndex = 14;
            // 
            // label_analogue
            // 
            this.label_analogue.AutoSize = true;
            this.label_analogue.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label_analogue.Location = new System.Drawing.Point(125, 274);
            this.label_analogue.Name = "label_analogue";
            this.label_analogue.Size = new System.Drawing.Size(77, 20);
            this.label_analogue.TabIndex = 13;
            this.label_analogue.Text = "Analogue";
            this.label_analogue.Visible = false;
            // 
            // quantity
            // 
            this.quantity.AutoSize = true;
            this.quantity.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.quantity.Location = new System.Drawing.Point(217, 218);
            this.quantity.Name = "quantity";
            this.quantity.Size = new System.Drawing.Size(0, 20);
            this.quantity.TabIndex = 12;
            // 
            // label_quantity
            // 
            this.label_quantity.AutoSize = true;
            this.label_quantity.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label_quantity.Location = new System.Drawing.Point(76, 218);
            this.label_quantity.Name = "label_quantity";
            this.label_quantity.Size = new System.Drawing.Size(126, 20);
            this.label_quantity.TabIndex = 11;
            this.label_quantity.Text = "Quantity in stock";
            this.label_quantity.Visible = false;
            // 
            // medicine
            // 
            this.medicine.AutoSize = true;
            this.medicine.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.medicine.Location = new System.Drawing.Point(217, 167);
            this.medicine.Name = "medicine";
            this.medicine.Size = new System.Drawing.Size(0, 20);
            this.medicine.TabIndex = 10;
            // 
            // label_medicine
            // 
            this.label_medicine.AutoSize = true;
            this.label_medicine.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label_medicine.Location = new System.Drawing.Point(130, 167);
            this.label_medicine.Name = "label_medicine";
            this.label_medicine.Size = new System.Drawing.Size(72, 20);
            this.label_medicine.TabIndex = 9;
            this.label_medicine.Text = "Medicine";
            this.label_medicine.Visible = false;
            // 
            // disease
            // 
            this.disease.AutoSize = true;
            this.disease.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.disease.Location = new System.Drawing.Point(217, 105);
            this.disease.Name = "disease";
            this.disease.Size = new System.Drawing.Size(0, 20);
            this.disease.TabIndex = 8;
            // 
            // label_disease
            // 
            this.label_disease.AutoSize = true;
            this.label_disease.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label_disease.Location = new System.Drawing.Point(135, 105);
            this.label_disease.Name = "label_disease";
            this.label_disease.Size = new System.Drawing.Size(67, 20);
            this.label_disease.TabIndex = 7;
            this.label_disease.Text = "Disease";
            this.label_disease.Visible = false;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label1.Location = new System.Drawing.Point(35, 46);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(167, 20);
            this.label1.TabIndex = 6;
            this.label1.Text = "Choose the symptoms";
            // 
            // comboBox1
            // 
            this.comboBox1.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.comboBox1.FormattingEnabled = true;
            this.comboBox1.Location = new System.Drawing.Point(221, 43);
            this.comboBox1.Name = "comboBox1";
            this.comboBox1.Size = new System.Drawing.Size(538, 28);
            this.comboBox1.TabIndex = 4;
            this.comboBox1.Text = "select symptoms";
            this.comboBox1.SelectedIndexChanged += new System.EventHandler(this.comboBox1_SelectedIndexChanged);
            // 
            // tabPage2
            // 
            this.tabPage2.Controls.Add(this.delete);
            this.tabPage2.Controls.Add(this.add);
            this.tabPage2.Controls.Add(this.save);
            this.tabPage2.Controls.Add(this.dataGridView1);
            this.tabPage2.Location = new System.Drawing.Point(4, 29);
            this.tabPage2.Name = "tabPage2";
            this.tabPage2.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage2.Size = new System.Drawing.Size(1249, 542);
            this.tabPage2.TabIndex = 1;
            this.tabPage2.Text = "Illnesses Table ";
            this.tabPage2.UseVisualStyleBackColor = true;
            // 
            // save
            // 
            this.save.Cursor = System.Windows.Forms.Cursors.Arrow;
            this.save.Location = new System.Drawing.Point(15, 333);
            this.save.Name = "save";
            this.save.Size = new System.Drawing.Size(75, 40);
            this.save.TabIndex = 1;
            this.save.Text = "save";
            this.save.UseVisualStyleBackColor = true;
            this.save.Click += new System.EventHandler(this.save_Click);
            // 
            // dataGridView1
            // 
            this.dataGridView1.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView1.Location = new System.Drawing.Point(3, 3);
            this.dataGridView1.Name = "dataGridView1";
            this.dataGridView1.Size = new System.Drawing.Size(944, 239);
            this.dataGridView1.TabIndex = 0;
            // 
            // tabPage3
            // 
            this.tabPage3.Controls.Add(this.button1);
            this.tabPage3.Controls.Add(this.dataGridView2);
            this.tabPage3.Location = new System.Drawing.Point(4, 29);
            this.tabPage3.Name = "tabPage3";
            this.tabPage3.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage3.Size = new System.Drawing.Size(1249, 542);
            this.tabPage3.TabIndex = 2;
            this.tabPage3.Text = "Medicines Table";
            this.tabPage3.UseVisualStyleBackColor = true;
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(639, 108);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(75, 23);
            this.button1.TabIndex = 1;
            this.button1.Text = "Save";
            this.button1.UseVisualStyleBackColor = true;
            // 
            // dataGridView2
            // 
            this.dataGridView2.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView2.Location = new System.Drawing.Point(-4, 0);
            this.dataGridView2.Name = "dataGridView2";
            this.dataGridView2.Size = new System.Drawing.Size(515, 253);
            this.dataGridView2.TabIndex = 0;
            // 
            // add
            // 
            this.add.Location = new System.Drawing.Point(161, 317);
            this.add.Name = "add";
            this.add.Size = new System.Drawing.Size(75, 36);
            this.add.TabIndex = 2;
            this.add.Text = "add";
            this.add.UseVisualStyleBackColor = true;
            this.add.Click += new System.EventHandler(this.add_Click);
            // 
            // delete
            // 
            this.delete.Location = new System.Drawing.Point(325, 317);
            this.delete.Name = "delete";
            this.delete.Size = new System.Drawing.Size(75, 23);
            this.delete.TabIndex = 3;
            this.delete.Text = "delete";
            this.delete.UseVisualStyleBackColor = true;
            this.delete.Click += new System.EventHandler(this.delete_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1281, 599);
            this.Controls.Add(this.tabControl1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.tabControl1.ResumeLayout(false);
            this.tabPage1.ResumeLayout(false);
            this.tabPage1.PerformLayout();
            this.tabPage2.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).EndInit();
            this.tabPage3.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView2)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion
        private System.Windows.Forms.TabControl tabControl1;
        private System.Windows.Forms.TabPage tabPage1;
        private System.Windows.Forms.TabPage tabPage2;
        private System.Windows.Forms.TabPage tabPage3;
        private System.Windows.Forms.Label label1;
        public System.Windows.Forms.ComboBox comboBox1;
        private System.Windows.Forms.DataGridView dataGridView1;
        private System.Windows.Forms.DataGridView dataGridView2;
        private System.Windows.Forms.Label label_disease;
        public System.Windows.Forms.Label disease;
        public System.Windows.Forms.Label medicine;
        private System.Windows.Forms.Label label_medicine;
        public System.Windows.Forms.Label quantity;
        private System.Windows.Forms.Label label_quantity;
        public System.Windows.Forms.Label analogue;
        private System.Windows.Forms.Label label_analogue;
        private System.Windows.Forms.Label label_quantity2;
        public System.Windows.Forms.Label quantity2;
        private System.Windows.Forms.Button recipe;
        private System.Windows.Forms.Button save;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Button add;
        private System.Windows.Forms.Button delete;
    }
}

