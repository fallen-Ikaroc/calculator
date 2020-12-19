
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
            this.label1 = new System.Windows.Forms.Label();
            this.recipe = new System.Windows.Forms.Label();
            this.Medicine = new System.Windows.Forms.ComboBox();
            this.label2 = new System.Windows.Forms.Label();
            this.quantity = new System.Windows.Forms.Label();
            this.save = new System.Windows.Forms.Button();
            this.print = new System.Windows.Forms.Button();
            this.dispense = new System.Windows.Forms.Button();
            this.close = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label1.Location = new System.Drawing.Point(197, 9);
            this.label1.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(90, 29);
            this.label1.TabIndex = 0;
            this.label1.Text = "Recipe";
            this.label1.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // recipe
            // 
            this.recipe.AutoSize = true;
            this.recipe.Location = new System.Drawing.Point(20, 47);
            this.recipe.Name = "recipe";
            this.recipe.Size = new System.Drawing.Size(0, 20);
            this.recipe.TabIndex = 1;
            // 
            // Medicine
            // 
            this.Medicine.FormattingEnabled = true;
            this.Medicine.Location = new System.Drawing.Point(97, 129);
            this.Medicine.Name = "Medicine";
            this.Medicine.Size = new System.Drawing.Size(139, 28);
            this.Medicine.TabIndex = 2;
            this.Medicine.Text = "Choose";
            this.Medicine.SelectedIndexChanged += new System.EventHandler(this.Medicine_SelectedIndexChanged);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(19, 132);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(72, 20);
            this.label2.TabIndex = 3;
            this.label2.Text = "Medicine";
            // 
            // quantity
            // 
            this.quantity.AutoSize = true;
            this.quantity.Location = new System.Drawing.Point(20, 178);
            this.quantity.Name = "quantity";
            this.quantity.Size = new System.Drawing.Size(0, 20);
            this.quantity.TabIndex = 4;
            // 
            // save
            // 
            this.save.Enabled = false;
            this.save.Location = new System.Drawing.Point(23, 227);
            this.save.Name = "save";
            this.save.Size = new System.Drawing.Size(75, 35);
            this.save.TabIndex = 5;
            this.save.Text = "Save";
            this.save.UseVisualStyleBackColor = true;
            this.save.Click += new System.EventHandler(this.save_Click);
            // 
            // print
            // 
            this.print.Enabled = false;
            this.print.Location = new System.Drawing.Point(104, 227);
            this.print.Name = "print";
            this.print.Size = new System.Drawing.Size(75, 35);
            this.print.TabIndex = 6;
            this.print.Text = "Print";
            this.print.UseVisualStyleBackColor = true;
            this.print.Click += new System.EventHandler(this.print_Click);
            // 
            // dispense
            // 
            this.dispense.Location = new System.Drawing.Point(185, 227);
            this.dispense.Name = "dispense";
            this.dispense.Size = new System.Drawing.Size(168, 35);
            this.dispense.TabIndex = 7;
            this.dispense.Text = "Dispense medicines";
            this.dispense.UseVisualStyleBackColor = true;
            this.dispense.Click += new System.EventHandler(this.dispense_Click);
            // 
            // close
            // 
            this.close.Location = new System.Drawing.Point(359, 227);
            this.close.Name = "close";
            this.close.Size = new System.Drawing.Size(75, 35);
            this.close.TabIndex = 8;
            this.close.Text = "Close";
            this.close.UseVisualStyleBackColor = true;
            this.close.Click += new System.EventHandler(this.close_Click);
            // 
            // Form2
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(9F, 20F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(515, 308);
            this.Controls.Add(this.close);
            this.Controls.Add(this.dispense);
            this.Controls.Add(this.print);
            this.Controls.Add(this.save);
            this.Controls.Add(this.quantity);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.Medicine);
            this.Controls.Add(this.recipe);
            this.Controls.Add(this.label1);
            this.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.Margin = new System.Windows.Forms.Padding(4, 5, 4, 5);
            this.Name = "Form2";
            this.Text = "Form2";
            this.Load += new System.EventHandler(this.Form2_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label recipe;
        private System.Windows.Forms.ComboBox Medicine;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label quantity;
        private System.Windows.Forms.Button save;
        private System.Windows.Forms.Button print;
        private System.Windows.Forms.Button dispense;
        private System.Windows.Forms.Button close;
    }
}