#pragma once
#include "CLService.h"

namespace ProjectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgv_enr;






	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

	private: NS_Comp_Svc::CLservices^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: NS_Comp_Svc::CLservices^ oSvc2;
	private: System::Data::DataSet^ oDs2;
	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;


	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::Label^ label6;




	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dgv_enr = (gcnew System::Windows::Forms::DataGridView());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dgv_enr
			// 
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(12, 12);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->Size = System::Drawing::Size(437, 194);
			this->dgv_enr->TabIndex = 0;
			// 
			// textBox4
			// 
			this->textBox4->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox4->Location = System::Drawing::Point(507, 58);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(173, 20);
			this->textBox4->TabIndex = 10;
			this->textBox4->Text = L"Nom employe";
			// 
			// textBox5
			// 
			this->textBox5->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox5->Location = System::Drawing::Point(506, 84);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(173, 20);
			this->textBox5->TabIndex = 9;
			this->textBox5->Text = L"Prenom employe";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(503, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 16);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Employe";
			// 
			// textBox7
			// 
			this->textBox7->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox7->Location = System::Drawing::Point(717, 58);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(171, 20);
			this->textBox7->TabIndex = 14;
			this->textBox7->Text = L"Nom superviseur";
			// 
			// textBox8
			// 
			this->textBox8->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox8->Location = System::Drawing::Point(717, 84);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(171, 20);
			this->textBox8->TabIndex = 13;
			this->textBox8->Text = L"Prenom superviseur";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 230);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 149);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Load";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(153, 230);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 40);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Insert";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(153, 284);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(99, 40);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Update";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(153, 339);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(99, 40);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Delete";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->ImageLocation = L"https://media.discordapp.net/attachments/881518424663158826/914885743392989214/me"
				L"at.png";
			this->pictureBox1->Location = System::Drawing::Point(558, 265);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(313, 110);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 22;
			this->pictureBox1->TabStop = false;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarTitleForeColor = System::Drawing::SystemColors::ControlText;
			this->dateTimePicker1->CalendarTrailingForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->dateTimePicker1->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(597, 136);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(82, 20);
			this->dateTimePicker1->TabIndex = 25;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(597, 36);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(82, 20);
			this->numericUpDown1->TabIndex = 26;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(600, 167);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(79, 20);
			this->numericUpDown2->TabIndex = 27;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(506, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 28;
			this->label1->Text = L"id Employe";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(506, 169);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(74, 13);
			this->label3->TabIndex = 29;
			this->label3->Text = L"id Superviseur";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(455, 136);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(136, 13);
			this->label4->TabIndex = 30;
			this->label4->Text = L"date de naissance employe";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(946, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(437, 194);
			this->dataGridView1->TabIndex = 31;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(1277, 339);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(99, 40);
			this->button5->TabIndex = 35;
			this->button5->Text = L"Delete";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(1277, 284);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(99, 40);
			this->button6->TabIndex = 34;
			this->button6->Text = L"Update";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(1277, 230);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(99, 40);
			this->button7->TabIndex = 33;
			this->button7->Text = L"Insert";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(1136, 230);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(120, 149);
			this->button8->TabIndex = 32;
			this->button8->Text = L"Load";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click_1);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(785, 12);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(91, 16);
			this->label5->TabIndex = 36;
			this->label5->Text = L"Superviseur";
			// 
			// textBox1
			// 
			this->textBox1->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox1->Location = System::Drawing::Point(717, 110);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(171, 20);
			this->textBox1->TabIndex = 37;
			this->textBox1->Text = L"Adresse superviseur";
			// 
			// textBox2
			// 
			this->textBox2->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox2->Location = System::Drawing::Point(506, 110);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(173, 20);
			this->textBox2->TabIndex = 38;
			this->textBox2->Text = L"Adresse employe";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CalendarTitleForeColor = System::Drawing::SystemColors::ControlText;
			this->dateTimePicker2->CalendarTrailingForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->dateTimePicker2->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(842, 136);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(82, 20);
			this->dateTimePicker2->TabIndex = 39;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(685, 136);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(151, 13);
			this->label6->TabIndex = 40;
			this->label6->Text = L"date de naissance superviseur";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1395, 387);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dgv_enr);
			this->Name = L"MyForm";
			this->Text = L"GestionEmploye.exe";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerToutesLesEmploye("Employe");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Employe";
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
		this->oSvc2 = gcnew NS_Comp_Svc::CLservices();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->ajouterUnEmploye(this->textBox5->Text, this->textBox4->Text, this->dateTimePicker1->Text, this->textBox2->Text, this->numericUpDown2->Text);
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc2->ajouterUnSuperviseur(this->textBox8->Text, this->textBox7->Text, this->dateTimePicker2->Text, this->textBox1->Text);
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->supprimerUnSuperviseur(this->numericUpDown2->Text);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->supprimerUnEmploye(this->numericUpDown1->Text);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->updateUnEmploye(this->numericUpDown1->Text, this->textBox4->Text, this->textBox5->Text, this->dateTimePicker1->Text, this->textBox2->Text, this->numericUpDown1->Text);
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->updateUnSuperviseur(this->numericUpDown2->Text, this->textBox7->Text, this->textBox8->Text, this->dateTimePicker2->Text, this->textBox1->Text);
	}
	private: System::Void button8_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Refresh();
		this->oDs2 = this->oSvc2->selectionnerToutesLesSuperviseurs("Superviseurs");
		this->dataGridView1->DataSource = this->oDs2;
		this->dataGridView1->DataMember = "Superviseurs";
	}
};

}

