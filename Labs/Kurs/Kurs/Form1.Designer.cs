
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
            System.Windows.Forms.DataGridViewCellStyle dataGridViewCellStyle1 = new System.Windows.Forms.DataGridViewCellStyle();
            System.Windows.Forms.DataGridViewCellStyle dataGridViewCellStyle2 = new System.Windows.Forms.DataGridViewCellStyle();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.tabControl1 = new System.Windows.Forms.TabControl();
            this.tabPage1 = new System.Windows.Forms.TabPage();
            this.label2 = new System.Windows.Forms.Label();
            this.name = new System.Windows.Forms.TextBox();
            this.form_recipe = new System.Windows.Forms.Button();
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
            this.dataGridView1 = new System.Windows.Forms.DataGridView();
            this.delete = new System.Windows.Forms.Button();
            this.add = new System.Windows.Forms.Button();
            this.save = new System.Windows.Forms.Button();
            this.tabPage3 = new System.Windows.Forms.TabPage();
            this.delete1 = new System.Windows.Forms.Button();
            this.add1 = new System.Windows.Forms.Button();
            this.save1 = new System.Windows.Forms.Button();
            this.button1 = new System.Windows.Forms.Button();
            this.dataGridView2 = new System.Windows.Forms.DataGridView();
            this.alert = new System.Windows.Forms.Label();
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
            this.tabControl1.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.tabControl1.Location = new System.Drawing.Point(12, 12);
            this.tabControl1.Name = "tabControl1";
            this.tabControl1.Padding = new System.Drawing.Point(59, 4);
            this.tabControl1.SelectedIndex = 0;
            this.tabControl1.Size = new System.Drawing.Size(661, 415);
            this.tabControl1.TabIndex = 0;
            // 
            // tabPage1
            // 
            this.tabPage1.Controls.Add(this.alert);
            this.tabPage1.Controls.Add(this.label2);
            this.tabPage1.Controls.Add(this.name);
            this.tabPage1.Controls.Add(this.form_recipe);
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
            this.tabPage1.Location = new System.Drawing.Point(4, 31);
            this.tabPage1.Name = "tabPage1";
            this.tabPage1.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage1.Size = new System.Drawing.Size(653, 380);
            this.tabPage1.TabIndex = 0;
            this.tabPage1.Text = "Main Page";
            this.tabPage1.UseVisualStyleBackColor = true;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label2.Location = new System.Drawing.Point(35, 30);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(163, 20);
            this.label2.TabIndex = 20;
            this.label2.Text = "Enter patient name";
            // 
            // name
            // 
            this.name.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.name.Location = new System.Drawing.Point(39, 53);
            this.name.Name = "name";
            this.name.Size = new System.Drawing.Size(569, 26);
            this.name.TabIndex = 19;
            this.name.TextChanged += new System.EventHandler(this.name_TextChanged);
            this.name.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.name_KeyPress);
            // 
            // form_recipe
            // 
            this.form_recipe.BackColor = System.Drawing.Color.DarkOrchid;
            this.form_recipe.Enabled = false;
            this.form_recipe.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.form_recipe.ForeColor = System.Drawing.Color.White;
            this.form_recipe.Location = new System.Drawing.Point(39, 314);
            this.form_recipe.Name = "form_recipe";
            this.form_recipe.Size = new System.Drawing.Size(569, 34);
            this.form_recipe.TabIndex = 17;
            this.form_recipe.Text = "Form a recipe";
            this.form_recipe.UseVisualStyleBackColor = false;
            this.form_recipe.Visible = false;
            this.form_recipe.Click += new System.EventHandler(this.form_recipe_Click);
            // 
            // quantity2
            // 
            this.quantity2.AutoSize = true;
            this.quantity2.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.quantity2.Location = new System.Drawing.Point(490, 262);
            this.quantity2.Name = "quantity2";
            this.quantity2.Size = new System.Drawing.Size(0, 20);
            this.quantity2.TabIndex = 16;
            // 
            // label_quantity2
            // 
            this.label_quantity2.AutoSize = true;
            this.label_quantity2.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label_quantity2.Location = new System.Drawing.Point(327, 262);
            this.label_quantity2.Name = "label_quantity2";
            this.label_quantity2.Size = new System.Drawing.Size(130, 20);
            this.label_quantity2.TabIndex = 15;
            this.label_quantity2.Text = "Quantity in stock:";
            this.label_quantity2.Visible = false;
            // 
            // analogue
            // 
            this.analogue.AutoSize = true;
            this.analogue.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.analogue.Location = new System.Drawing.Point(134, 262);
            this.analogue.Name = "analogue";
            this.analogue.Size = new System.Drawing.Size(0, 20);
            this.analogue.TabIndex = 14;
            // 
            // label_analogue
            // 
            this.label_analogue.AutoSize = true;
            this.label_analogue.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label_analogue.Location = new System.Drawing.Point(36, 262);
            this.label_analogue.Name = "label_analogue";
            this.label_analogue.Size = new System.Drawing.Size(81, 20);
            this.label_analogue.TabIndex = 13;
            this.label_analogue.Text = "Analogue:";
            this.label_analogue.Visible = false;
            // 
            // quantity
            // 
            this.quantity.AutoSize = true;
            this.quantity.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.quantity.Location = new System.Drawing.Point(490, 220);
            this.quantity.Name = "quantity";
            this.quantity.Size = new System.Drawing.Size(0, 20);
            this.quantity.TabIndex = 12;
            // 
            // label_quantity
            // 
            this.label_quantity.AutoSize = true;
            this.label_quantity.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label_quantity.Location = new System.Drawing.Point(327, 220);
            this.label_quantity.Name = "label_quantity";
            this.label_quantity.Size = new System.Drawing.Size(130, 20);
            this.label_quantity.TabIndex = 11;
            this.label_quantity.Text = "Quantity in stock:";
            this.label_quantity.Visible = false;
            // 
            // medicine
            // 
            this.medicine.AutoSize = true;
            this.medicine.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.medicine.Location = new System.Drawing.Point(134, 220);
            this.medicine.Name = "medicine";
            this.medicine.Size = new System.Drawing.Size(0, 20);
            this.medicine.TabIndex = 10;
            // 
            // label_medicine
            // 
            this.label_medicine.AutoSize = true;
            this.label_medicine.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label_medicine.Location = new System.Drawing.Point(35, 220);
            this.label_medicine.Name = "label_medicine";
            this.label_medicine.Size = new System.Drawing.Size(76, 20);
            this.label_medicine.TabIndex = 9;
            this.label_medicine.Text = "Medicine:";
            this.label_medicine.Visible = false;
            // 
            // disease
            // 
            this.disease.AutoSize = true;
            this.disease.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.disease.Location = new System.Drawing.Point(134, 178);
            this.disease.Name = "disease";
            this.disease.Size = new System.Drawing.Size(0, 20);
            this.disease.TabIndex = 8;
            // 
            // label_disease
            // 
            this.label_disease.AutoSize = true;
            this.label_disease.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label_disease.Location = new System.Drawing.Point(35, 178);
            this.label_disease.Name = "label_disease";
            this.label_disease.Size = new System.Drawing.Size(71, 20);
            this.label_disease.TabIndex = 7;
            this.label_disease.Text = "Disease:";
            this.label_disease.Visible = false;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label1.Location = new System.Drawing.Point(36, 102);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(186, 20);
            this.label1.TabIndex = 6;
            this.label1.Text = "Choose the symptoms";
            // 
            // comboBox1
            // 
            this.comboBox1.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.comboBox1.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.comboBox1.FormattingEnabled = true;
            this.comboBox1.Location = new System.Drawing.Point(39, 125);
            this.comboBox1.Name = "comboBox1";
            this.comboBox1.Size = new System.Drawing.Size(569, 28);
            this.comboBox1.TabIndex = 4;
            this.comboBox1.SelectedIndexChanged += new System.EventHandler(this.comboBox1_SelectedIndexChanged);
            // 
            // tabPage2
            // 
            this.tabPage2.Controls.Add(this.dataGridView1);
            this.tabPage2.Controls.Add(this.delete);
            this.tabPage2.Controls.Add(this.add);
            this.tabPage2.Controls.Add(this.save);
            this.tabPage2.Location = new System.Drawing.Point(4, 31);
            this.tabPage2.Margin = new System.Windows.Forms.Padding(0);
            this.tabPage2.Name = "tabPage2";
            this.tabPage2.Size = new System.Drawing.Size(653, 380);
            this.tabPage2.TabIndex = 1;
            this.tabPage2.Text = "Diseases Table ";
            this.tabPage2.UseVisualStyleBackColor = true;
            // 
            // dataGridView1
            // 
            this.dataGridView1.AllowUserToAddRows = false;
            this.dataGridView1.AllowUserToResizeRows = false;
            this.dataGridView1.AutoSizeColumnsMode = System.Windows.Forms.DataGridViewAutoSizeColumnsMode.Fill;
            this.dataGridView1.AutoSizeRowsMode = System.Windows.Forms.DataGridViewAutoSizeRowsMode.DisplayedCells;
            this.dataGridView1.BackgroundColor = System.Drawing.Color.White;
            dataGridViewCellStyle1.Alignment = System.Windows.Forms.DataGridViewContentAlignment.MiddleCenter;
            dataGridViewCellStyle1.BackColor = System.Drawing.Color.DarkOrchid;
            dataGridViewCellStyle1.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            dataGridViewCellStyle1.ForeColor = System.Drawing.Color.DarkOrchid;
            dataGridViewCellStyle1.SelectionBackColor = System.Drawing.SystemColors.Highlight;
            dataGridViewCellStyle1.SelectionForeColor = System.Drawing.SystemColors.HighlightText;
            dataGridViewCellStyle1.WrapMode = System.Windows.Forms.DataGridViewTriState.True;
            this.dataGridView1.ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
            this.dataGridView1.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView1.Location = new System.Drawing.Point(0, 0);
            this.dataGridView1.Margin = new System.Windows.Forms.Padding(0);
            this.dataGridView1.Name = "dataGridView1";
            this.dataGridView1.RowHeadersWidth = 30;
            this.dataGridView1.Size = new System.Drawing.Size(651, 335);
            this.dataGridView1.TabIndex = 4;
            this.dataGridView1.CellValidating += new System.Windows.Forms.DataGridViewCellValidatingEventHandler(this.dataGridView1_CellValidating);
            this.dataGridView1.DataError += new System.Windows.Forms.DataGridViewDataErrorEventHandler(this.dataGridView1_DataError);
            // 
            // delete
            // 
            this.delete.BackColor = System.Drawing.Color.DarkOrchid;
            this.delete.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.delete.ForeColor = System.Drawing.Color.White;
            this.delete.Location = new System.Drawing.Point(437, 344);
            this.delete.Name = "delete";
            this.delete.Size = new System.Drawing.Size(210, 30);
            this.delete.TabIndex = 3;
            this.delete.Text = "Delete";
            this.delete.UseVisualStyleBackColor = false;
            this.delete.Click += new System.EventHandler(this.delete_Click);
            // 
            // add
            // 
            this.add.BackColor = System.Drawing.Color.DarkOrchid;
            this.add.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.add.ForeColor = System.Drawing.Color.White;
            this.add.Location = new System.Drawing.Point(221, 344);
            this.add.Name = "add";
            this.add.Size = new System.Drawing.Size(210, 30);
            this.add.TabIndex = 2;
            this.add.Text = "Add";
            this.add.UseVisualStyleBackColor = false;
            this.add.Click += new System.EventHandler(this.add_Click);
            // 
            // save
            // 
            this.save.BackColor = System.Drawing.Color.DarkOrchid;
            this.save.Cursor = System.Windows.Forms.Cursors.Arrow;
            this.save.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.save.ForeColor = System.Drawing.Color.White;
            this.save.Location = new System.Drawing.Point(5, 344);
            this.save.Name = "save";
            this.save.Size = new System.Drawing.Size(210, 30);
            this.save.TabIndex = 1;
            this.save.Text = "Save";
            this.save.UseVisualStyleBackColor = false;
            this.save.Click += new System.EventHandler(this.save_Click);
            // 
            // tabPage3
            // 
            this.tabPage3.Controls.Add(this.delete1);
            this.tabPage3.Controls.Add(this.add1);
            this.tabPage3.Controls.Add(this.save1);
            this.tabPage3.Controls.Add(this.button1);
            this.tabPage3.Controls.Add(this.dataGridView2);
            this.tabPage3.Location = new System.Drawing.Point(4, 31);
            this.tabPage3.Name = "tabPage3";
            this.tabPage3.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage3.Size = new System.Drawing.Size(653, 380);
            this.tabPage3.TabIndex = 2;
            this.tabPage3.Text = "Medicines Table";
            this.tabPage3.UseVisualStyleBackColor = true;
            // 
            // delete1
            // 
            this.delete1.BackColor = System.Drawing.Color.DarkOrchid;
            this.delete1.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.delete1.ForeColor = System.Drawing.Color.White;
            this.delete1.Location = new System.Drawing.Point(437, 344);
            this.delete1.Name = "delete1";
            this.delete1.Size = new System.Drawing.Size(210, 30);
            this.delete1.TabIndex = 4;
            this.delete1.Text = "Delete";
            this.delete1.UseVisualStyleBackColor = false;
            this.delete1.Click += new System.EventHandler(this.delete1_Click);
            // 
            // add1
            // 
            this.add1.BackColor = System.Drawing.Color.DarkOrchid;
            this.add1.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.add1.ForeColor = System.Drawing.Color.White;
            this.add1.Location = new System.Drawing.Point(221, 344);
            this.add1.Name = "add1";
            this.add1.Size = new System.Drawing.Size(210, 30);
            this.add1.TabIndex = 3;
            this.add1.Text = "Add";
            this.add1.UseVisualStyleBackColor = false;
            this.add1.Click += new System.EventHandler(this.add1_Click);
            // 
            // save1
            // 
            this.save1.BackColor = System.Drawing.Color.DarkOrchid;
            this.save1.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.save1.ForeColor = System.Drawing.Color.White;
            this.save1.Location = new System.Drawing.Point(5, 344);
            this.save1.Name = "save1";
            this.save1.Size = new System.Drawing.Size(210, 30);
            this.save1.TabIndex = 2;
            this.save1.Text = "Save";
            this.save1.UseVisualStyleBackColor = false;
            this.save1.Click += new System.EventHandler(this.save1_Click);
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(60, 407);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(75, 23);
            this.button1.TabIndex = 1;
            this.button1.Text = "Save";
            this.button1.UseVisualStyleBackColor = true;
            // 
            // dataGridView2
            // 
            this.dataGridView2.AllowUserToAddRows = false;
            this.dataGridView2.AllowUserToResizeRows = false;
            this.dataGridView2.AutoSizeColumnsMode = System.Windows.Forms.DataGridViewAutoSizeColumnsMode.Fill;
            this.dataGridView2.AutoSizeRowsMode = System.Windows.Forms.DataGridViewAutoSizeRowsMode.DisplayedCells;
            this.dataGridView2.BackgroundColor = System.Drawing.Color.White;
            dataGridViewCellStyle2.Alignment = System.Windows.Forms.DataGridViewContentAlignment.MiddleCenter;
            dataGridViewCellStyle2.BackColor = System.Drawing.Color.DarkOrchid;
            dataGridViewCellStyle2.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            dataGridViewCellStyle2.ForeColor = System.Drawing.Color.DarkOrchid;
            dataGridViewCellStyle2.SelectionBackColor = System.Drawing.SystemColors.Highlight;
            dataGridViewCellStyle2.SelectionForeColor = System.Drawing.SystemColors.HighlightText;
            dataGridViewCellStyle2.WrapMode = System.Windows.Forms.DataGridViewTriState.True;
            this.dataGridView2.ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
            this.dataGridView2.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView2.Location = new System.Drawing.Point(0, 0);
            this.dataGridView2.Margin = new System.Windows.Forms.Padding(0);
            this.dataGridView2.Name = "dataGridView2";
            this.dataGridView2.RowHeadersWidth = 30;
            this.dataGridView2.Size = new System.Drawing.Size(651, 335);
            this.dataGridView2.TabIndex = 0;
            this.dataGridView2.CellValidating += new System.Windows.Forms.DataGridViewCellValidatingEventHandler(this.dataGridView2_CellValidating);
            this.dataGridView2.DataError += new System.Windows.Forms.DataGridViewDataErrorEventHandler(this.dataGridView2_DataError);
            // 
            // alert
            // 
            this.alert.AutoSize = true;
            this.alert.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(192)))), ((int)(((byte)(0)))), ((int)(((byte)(0)))));
            this.alert.Location = new System.Drawing.Point(205, 30);
            this.alert.Name = "alert";
            this.alert.Size = new System.Drawing.Size(0, 20);
            this.alert.TabIndex = 21;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(684, 439);
            this.Controls.Add(this.tabControl1);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.MaximumSize = new System.Drawing.Size(700, 478);
            this.MinimumSize = new System.Drawing.Size(700, 478);
            this.Name = "Form1";
            this.Text = "Healer\'s handbook";
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
        private System.Windows.Forms.TabPage tabPage3;
        private System.Windows.Forms.Label label1;
        public System.Windows.Forms.ComboBox comboBox1;
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
        private System.Windows.Forms.Button form_recipe;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Label label2;
        public System.Windows.Forms.TextBox name;
        private System.Windows.Forms.TabPage tabPage2;
        private System.Windows.Forms.Button delete;
        private System.Windows.Forms.Button add;
        private System.Windows.Forms.Button save;
        private System.Windows.Forms.Button delete1;
        private System.Windows.Forms.Button add1;
        private System.Windows.Forms.Button save1;
        private System.Windows.Forms.DataGridView dataGridView1;
        private System.Windows.Forms.Label alert;
    }
}

