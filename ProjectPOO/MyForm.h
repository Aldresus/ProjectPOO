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

	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Label^ label3;




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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->SuspendLayout();
			// 
			// dgv_enr
			// 
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(12, 32);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->Size = System::Drawing::Size(437, 194);
			this->dgv_enr->TabIndex = 0;
			// 
			// textBox4
			// 
			this->textBox4->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox4->Location = System::Drawing::Point(53, 311);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(173, 20);
			this->textBox4->TabIndex = 10;
			this->textBox4->Text = L"1.5";
			// 
			// textBox5
			// 
			this->textBox5->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox5->Location = System::Drawing::Point(52, 337);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(173, 20);
			this->textBox5->TabIndex = 9;
			this->textBox5->Text = L"5";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(49, 265);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 16);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Commandes";
			// 
			// textBox7
			// 
			this->textBox7->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox7->Location = System::Drawing::Point(576, 311);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(171, 20);
			this->textBox7->TabIndex = 14;
			this->textBox7->Text = L"Nom societe";
			// 
			// textBox8
			// 
			this->textBox8->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox8->Location = System::Drawing::Point(576, 337);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(171, 20);
			this->textBox8->TabIndex = 13;
			this->textBox8->Text = L"num_service";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(30, 503);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 149);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Load";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(179, 503);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 40);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Insert";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(179, 557);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(99, 40);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Update";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(179, 612);
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
			this->pictureBox1->Location = System::Drawing::Point(15, 658);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(406, 110);
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
			this->dateTimePicker1->Location = System::Drawing::Point(143, 389);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(82, 20);
			this->dateTimePicker1->TabIndex = 25;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(143, 289);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(82, 20);
			this->numericUpDown1->TabIndex = 26;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(52, 289);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 13);
			this->label1->TabIndex = 28;
			this->label1->Text = L"id Commandes";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1, 369);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 13);
			this->label4->TabIndex = 30;
			this->label4->Text = L"date de commande";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(527, 32);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(437, 194);
			this->dataGridView1->TabIndex = 31;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(0, 0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 46;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(0, 0);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 47;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(0, 0);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 48;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(0, 0);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 49;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(642, 265);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 16);
			this->label5->TabIndex = 36;
			this->label5->Text = L"Facture";
			// 
			// textBox1
			// 
			this->textBox1->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox1->Location = System::Drawing::Point(574, 415);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(171, 20);
			this->textBox1->TabIndex = 37;
			this->textBox1->Text = L"Adresse facturation";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CalendarTitleForeColor = System::Drawing::SystemColors::ControlText;
			this->dateTimePicker2->CalendarTrailingForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->dateTimePicker2->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(665, 360);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(82, 20);
			this->dateTimePicker2->TabIndex = 39;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(563, 363);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(96, 13);
			this->label6->TabIndex = 40;
			this->label6->Text = L"date de facturation";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(1039, 32);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(437, 194);
			this->dataGridView2->TabIndex = 41;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(668, 612);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(99, 40);
			this->button9->TabIndex = 45;
			this->button9->Text = L"Delete";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(668, 557);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(99, 40);
			this->button10->TabIndex = 44;
			this->button10->Text = L"Update";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(668, 503);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(99, 40);
			this->button11->TabIndex = 43;
			this->button11->Text = L"Insert";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(527, 503);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(120, 149);
			this->button12->TabIndex = 42;
			this->button12->Text = L"Load";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->CalendarTitleForeColor = System::Drawing::SystemColors::ControlText;
			this->dateTimePicker3->CalendarTrailingForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->dateTimePicker3->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker3->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker3->Location = System::Drawing::Point(143, 363);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->Size = System::Drawing::Size(82, 20);
			this->dateTimePicker3->TabIndex = 50;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(1, 396);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(84, 13);
			this->label7->TabIndex = 51;
			this->label7->Text = L"date de livraison";
			// 
			// textBox2
			// 
			this->textBox2->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox2->Location = System::Drawing::Point(52, 415);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(173, 20);
			this->textBox2->TabIndex = 52;
			this->textBox2->Text = L"adresse livraison";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(663, 287);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(82, 20);
			this->numericUpDown2->TabIndex = 53;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(571, 291);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 13);
			this->label3->TabIndex = 54;
			this->label3->Text = L"id Facture";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1488, 773);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->dateTimePicker3);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
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
			this->Text = L"GestionCommandes.exe";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerToutesLesCommandes("Commande");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Commande";
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
		this->oSvc2 = gcnew NS_Comp_Svc::CLservices();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->ajouterUnCommandes(this->textBox5->Text, this->textBox4->Text, this->dateTimePicker1->Text, this->textBox2->Text, this->dateTimePicker3->Text);
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc2->ajouterUnFactures(this->textBox8->Text, this->textBox7->Text, this->dateTimePicker2->Text, this->textBox1->Text);
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->supprimerUnFactures(this->numericUpDown2->Text);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->supprimerUnCommandes(this->numericUpDown1->Text);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->updateUnCommandes(this->numericUpDown1->Text, this->textBox4->Text, this->textBox5->Text, this->dateTimePicker1->Text, this->textBox2->Text, this->numericUpDown1->Text);
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->updateUnFactures(this->numericUpDown2->Text, this->textBox7->Text, this->textBox8->Text, this->dateTimePicker2->Text, this->textBox1->Text);
	}
	private: System::Void button8_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Refresh();
		this->oDs2 = this->oSvc2->selectionnerToutesLesFacturess("Facture");
		this->dataGridView1->DataSource = this->oDs2;
		this->dataGridView1->DataMember = "Facture";
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
