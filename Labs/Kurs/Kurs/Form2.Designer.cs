
namespace Kurs
{
    partial class Form2
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form2));
            this.recipe = new System.Windows.Forms.Label();
            this.Medicine = new System.Windows.Forms.ComboBox();
            this.label2 = new System.Windows.Forms.Label();
            this.quantity = new System.Windows.Forms.Label();
            this.save = new System.Windows.Forms.Button();
            this.print = new System.Windows.Forms.Button();
            this.close = new System.Windows.Forms.Button();
            this.date = new System.Windows.Forms.Label();
            this.outMedicine = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // recipe
            // 
            this.recipe.AutoSize = true;
            this.recipe.Location = new System.Drawing.Point(27, 24);
            this.recipe.Name = "recipe";
            this.recipe.Size = new System.Drawing.Size(0, 20);
            this.recipe.TabIndex = 1;
            // 
            // Medicine
            // 
            this.Medicine.FormattingEnabled = true;
            this.Medicine.Location = new System.Drawing.Point(113, 93);
            this.Medicine.Name = "Medicine";
            this.Medicine.Size = new System.Drawing.Size(154, 28);
            this.Medicine.TabIndex = 2;
            this.Medicine.Text = "Choose";
            this.Medicine.SelectedIndexChanged += new System.EventHandler(this.Medicine_SelectedIndexChanged);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(27, 96);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(72, 20);
            this.label2.TabIndex = 3;
            this.label2.Text = "Medicine";
            // 
            // quantity
            // 
            this.quantity.AutoSize = true;
            this.quantity.Location = new System.Drawing.Point(27, 131);
            this.quantity.Name = "quantity";
            this.quantity.Size = new System.Drawing.Size(0, 20);
            this.quantity.TabIndex = 4;
            // 
            // save
            // 
            this.save.BackColor = System.Drawing.Color.DarkOrchid;
            this.save.Enabled = false;
            this.save.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.save.ForeColor = System.Drawing.Color.White;
            this.save.Location = new System.Drawing.Point(31, 164);
            this.save.Name = "save";
            this.save.Size = new System.Drawing.Size(225, 35);
            this.save.TabIndex = 5;
            this.save.Text = "Save";
            this.save.UseVisualStyleBackColor = false;
            this.save.Click += new System.EventHandler(this.save_Click);
            // 
            // print
            // 
            this.print.BackColor = System.Drawing.Color.DarkOrchid;
            this.print.Enabled = false;
            this.print.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.print.ForeColor = System.Drawing.Color.White;
            this.print.Location = new System.Drawing.Point(288, 164);
            this.print.Name = "print";
            this.print.Size = new System.Drawing.Size(225, 35);
            this.print.TabIndex = 6;
            this.print.Text = "Print";
            this.print.UseVisualStyleBackColor = false;
            this.print.Click += new System.EventHandler(this.print_Click);
            // 
            // close
            // 
            this.close.BackColor = System.Drawing.Color.DarkOrchid;
            this.close.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.close.ForeColor = System.Drawing.Color.White;
            this.close.Location = new System.Drawing.Point(547, 164);
            this.close.Name = "close";
            this.close.Size = new System.Drawing.Size(225, 35);
            this.close.TabIndex = 8;
            this.close.Text = "Close";
            this.close.UseVisualStyleBackColor = false;
            this.close.Click += new System.EventHandler(this.close_Click);
            // 
            // date
            // 
            this.date.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.date.AutoSize = true;
            this.date.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.date.Location = new System.Drawing.Point(610, 24);
            this.date.Name = "date";
            this.date.Size = new System.Drawing.Size(0, 20);
            this.date.TabIndex = 9;
            this.date.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // outMedicine
            // 
            this.outMedicine.Location = new System.Drawing.Point(645, 74);
            this.outMedicine.Name = "outMedicine";
            this.outMedicine.Size = new System.Drawing.Size(75, 23);
            this.outMedicine.TabIndex = 10;
            this.outMedicine.Text = "button1";
            this.outMedicine.UseVisualStyleBackColor = true;
            this.outMedicine.Click += new System.EventHandler(this.outMedicine_Click);
            // 
            // Form2
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(9F, 20F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(799, 222);
            this.Controls.Add(this.outMedicine);
            this.Controls.Add(this.date);
            this.Controls.Add(this.close);
            this.Controls.Add(this.print);
            this.Controls.Add(this.save);
            this.Controls.Add(this.quantity);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.Medicine);
            this.Controls.Add(this.recipe);
            this.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Margin = new System.Windows.Forms.Padding(4, 5, 4, 5);
            this.MaximumSize = new System.Drawing.Size(815, 261);
            this.MinimumSize = new System.Drawing.Size(815, 261);
            this.Name = "Form2";
            this.Padding = new System.Windows.Forms.Padding(24);
            this.Text = "Recipe";
            this.Load += new System.EventHandler(this.Form2_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.Label recipe;
        private System.Windows.Forms.ComboBox Medicine;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label quantity;
        private System.Windows.Forms.Button save;
        private System.Windows.Forms.Button print;
        private System.Windows.Forms.Button close;
        private System.Windows.Forms.Label date;
        private System.Windows.Forms.Button outMedicine;
    }
}