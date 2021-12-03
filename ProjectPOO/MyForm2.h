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
	/// Description r�sum�e de MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgv_enr;









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
	private: NS_Comp_Svc::CLservices^ oSvc3;
	private: System::Data::DataSet^ oDs3;
	private: NS_Comp_Svc::CLservices^ oSvc4;
	private: System::Data::DataSet^ oDs4;
	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;


	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;




	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView3;



	private: System::Windows::Forms::Label^ label5;


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
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;


	private: System::Windows::Forms::Label^ label15;

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown6;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown7;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown8;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox11;

	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker4;


	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown9;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown10;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown11;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown12;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown13;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown14;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown15;





	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dgv_enr = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label5 = (gcnew System::Windows::Forms::Label());
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
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker4 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->numericUpDown9 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown10 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown11 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown12 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown13 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown14 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown15 = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown15))->BeginInit();
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
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(9, 229);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 16);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Commandes";
			// 
			// textBox7
			// 
			this->textBox7->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox7->Location = System::Drawing::Point(1398, 310);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(78, 20);
			this->textBox7->TabIndex = 14;
			this->textBox7->Text = L"Nom societe";
			// 
			// textBox8
			// 
			this->textBox8->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox8->Location = System::Drawing::Point(1398, 284);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(78, 20);
			this->textBox8->TabIndex = 13;
			this->textBox8->Text = L"num_service";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 253);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 149);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Load";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(161, 253);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 40);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Insert";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(161, 307);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(99, 40);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Update";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(161, 362);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(99, 40);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Delete";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm2::button4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->ImageLocation = L"https://media.discordapp.net/attachments/881518424663158826/914885743392989214/me"
				L"at.png";
			this->pictureBox1->Location = System::Drawing::Point(1829, 370);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(194, 67);
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
			this->dateTimePicker1->Location = System::Drawing::Point(371, 331);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(78, 20);
			this->dateTimePicker1->TabIndex = 25;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(268, 305);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 13);
			this->label4->TabIndex = 30;
			this->label4->Text = L"date de commande";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(1039, 32);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(437, 194);
			this->dataGridView1->TabIndex = 31;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(1040, 229);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 16);
			this->label5->TabIndex = 36;
			this->label5->Text = L"Facture";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CalendarTitleForeColor = System::Drawing::SystemColors::ControlText;
			this->dateTimePicker2->CalendarTrailingForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->dateTimePicker2->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(1398, 258);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(78, 20);
			this->dateTimePicker2->TabIndex = 39;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(1293, 258);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(96, 13);
			this->label6->TabIndex = 40;
			this->label6->Text = L"date de facturation";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(527, 32);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(437, 194);
			this->dataGridView2->TabIndex = 41;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(1180, 361);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(99, 40);
			this->button9->TabIndex = 45;
			this->button9->Text = L"Delete";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm2::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(1180, 306);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(99, 40);
			this->button10->TabIndex = 44;
			this->button10->Text = L"Update";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm2::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(1180, 252);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(99, 40);
			this->button11->TabIndex = 43;
			this->button11->Text = L"Insert";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm2::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(1039, 253);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(120, 149);
			this->button12->TabIndex = 42;
			this->button12->Text = L"Load";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm2::button12_Click);
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->CalendarTitleForeColor = System::Drawing::SystemColors::ControlText;
			this->dateTimePicker3->CalendarTrailingForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->dateTimePicker3->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker3->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker3->Location = System::Drawing::Point(371, 305);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->Size = System::Drawing::Size(78, 20);
			this->dateTimePicker3->TabIndex = 50;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(281, 331);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(84, 13);
			this->label7->TabIndex = 51;
			this->label7->Text = L"date de livraison";
			// 
			// textBox2
			// 
			this->textBox2->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox2->Location = System::Drawing::Point(371, 409);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(78, 20);
			this->textBox2->TabIndex = 52;
			this->textBox2->Text = L"Rue";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(1398, 232);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(78, 20);
			this->numericUpDown2->TabIndex = 53;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1335, 233);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 13);
			this->label3->TabIndex = 54;
			this->label3->Text = L"id Facture";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(668, 363);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(99, 40);
			this->button5->TabIndex = 58;
			this->button5->Text = L"Delete";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm2::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(668, 308);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(99, 40);
			this->button6->TabIndex = 57;
			this->button6->Text = L"Update";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm2::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(668, 254);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(99, 40);
			this->button7->TabIndex = 56;
			this->button7->Text = L"Insert";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm2::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(527, 253);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(120, 149);
			this->button8->TabIndex = 55;
			this->button8->Text = L"Load";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm2::button8_Click);
			// 
			// textBox3
			// 
			this->textBox3->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox3->Location = System::Drawing::Point(886, 263);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(78, 20);
			this->textBox3->TabIndex = 59;
			this->textBox3->Text = L"Nom produit";
			// 
			// textBox9
			// 
			this->textBox9->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox9->Location = System::Drawing::Point(886, 315);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(78, 20);
			this->textBox9->TabIndex = 61;
			this->textBox9->Text = L"Couleur";
			// 
			// textBox10
			// 
			this->textBox10->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox10->Location = System::Drawing::Point(886, 341);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(78, 20);
			this->textBox10->TabIndex = 62;
			this->textBox10->Text = L"Nature";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(289, 259);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(77, 13);
			this->label8->TabIndex = 65;
			this->label8->Text = L"Total hors taxe";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(337, 282);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(28, 13);
			this->label9->TabIndex = 66;
			this->label9->Text = L"TVA";
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->DecimalPlaces = 2;
			this->numericUpDown5->Location = System::Drawing::Point(886, 289);
			this->numericUpDown5->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(78, 20);
			this->numericUpDown5->TabIndex = 24;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(313, 383);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(52, 13);
			this->label10->TabIndex = 68;
			this->label10->Text = L"Num voie";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(838, 366);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(42, 13);
			this->label11->TabIndex = 69;
			this->label11->Text = L"Remise";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(838, 392);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(37, 13);
			this->label12->TabIndex = 70;
			this->label12->Text = L"Marge";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(832, 290);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(42, 13);
			this->label15->TabIndex = 73;
			this->label15->Text = L"Prix HT";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(524, 229);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(52, 16);
			this->label17->TabIndex = 75;
			this->label17->Text = L"Article";
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Location = System::Drawing::Point(886, 237);
			this->numericUpDown6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDown6->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(78, 20);
			this->numericUpDown6->TabIndex = 76;
			this->numericUpDown6->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(788, 239);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(88, 13);
			this->label18->TabIndex = 77;
			this->label18->Text = L"Reference article";
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->DecimalPlaces = 2;
			this->numericUpDown7->Location = System::Drawing::Point(886, 392);
			this->numericUpDown7->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown7->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(78, 20);
			this->numericUpDown7->TabIndex = 78;
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->DecimalPlaces = 2;
			this->numericUpDown8->Location = System::Drawing::Point(886, 367);
			this->numericUpDown8->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown8->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(78, 20);
			this->numericUpDown8->TabIndex = 79;
			// 
			// textBox6
			// 
			this->textBox6->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox6->Location = System::Drawing::Point(1398, 336);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(78, 20);
			this->textBox6->TabIndex = 80;
			this->textBox6->Text = L"Logo";
			// 
			// textBox11
			// 
			this->textBox11->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox11->Location = System::Drawing::Point(1909, 311);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(78, 20);
			this->textBox11->TabIndex = 81;
			this->textBox11->Text = L"moyen paiement";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(1814, 286);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(89, 13);
			this->label19->TabIndex = 85;
			this->label19->Text = L"date de paiement";
			// 
			// dateTimePicker4
			// 
			this->dateTimePicker4->CalendarTitleForeColor = System::Drawing::SystemColors::ControlText;
			this->dateTimePicker4->CalendarTrailingForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->dateTimePicker4->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker4->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker4->Location = System::Drawing::Point(1909, 285);
			this->dateTimePicker4->Name = L"dateTimePicker4";
			this->dateTimePicker4->Size = System::Drawing::Size(78, 20);
			this->dateTimePicker4->TabIndex = 84;
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(1550, 32);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->Size = System::Drawing::Size(437, 194);
			this->dataGridView4->TabIndex = 88;
			// 
			// numericUpDown9
			// 
			this->numericUpDown9->Location = System::Drawing::Point(371, 383);
			this->numericUpDown9->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDown9->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown9->Name = L"numericUpDown9";
			this->numericUpDown9->Size = System::Drawing::Size(78, 20);
			this->numericUpDown9->TabIndex = 90;
			this->numericUpDown9->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// textBox12
			// 
			this->textBox12->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox12->Location = System::Drawing::Point(371, 433);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(78, 20);
			this->textBox12->TabIndex = 91;
			this->textBox12->Text = L"Ville";
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(1691, 364);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(99, 40);
			this->button13->TabIndex = 95;
			this->button13->Text = L"Delete";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm2::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(1691, 309);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(99, 40);
			this->button14->TabIndex = 94;
			this->button14->Text = L"Update";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm2::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(1691, 257);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(99, 40);
			this->button15->TabIndex = 93;
			this->button15->Text = L"Insert";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm2::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(1550, 256);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(120, 149);
			this->button16->TabIndex = 92;
			this->button16->Text = L"Load";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm2::button16_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(1547, 229);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(81, 16);
			this->label21->TabIndex = 96;
			this->label21->Text = L"Paiements";
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->DecimalPlaces = 2;
			this->numericUpDown4->Location = System::Drawing::Point(371, 257);
			this->numericUpDown4->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(78, 20);
			this->numericUpDown4->TabIndex = 97;
			// 
			// numericUpDown10
			// 
			this->numericUpDown10->Location = System::Drawing::Point(371, 281);
			this->numericUpDown10->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown10->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDown10->Name = L"numericUpDown10";
			this->numericUpDown10->Size = System::Drawing::Size(78, 20);
			this->numericUpDown10->TabIndex = 98;
			// 
			// textBox4
			// 
			this->textBox4->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox4->Location = System::Drawing::Point(1398, 438);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(78, 20);
			this->textBox4->TabIndex = 102;
			this->textBox4->Text = L"Ville";
			// 
			// numericUpDown11
			// 
			this->numericUpDown11->Location = System::Drawing::Point(1398, 388);
			this->numericUpDown11->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDown11->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown11->Name = L"numericUpDown11";
			this->numericUpDown11->Size = System::Drawing::Size(78, 20);
			this->numericUpDown11->TabIndex = 101;
			this->numericUpDown11->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(1335, 389);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(52, 13);
			this->label13->TabIndex = 100;
			this->label13->Text = L"Num voie";
			// 
			// textBox5
			// 
			this->textBox5->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox5->Location = System::Drawing::Point(1398, 414);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(78, 20);
			this->textBox5->TabIndex = 99;
			this->textBox5->Text = L"Rue";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(321, 357);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(44, 13);
			this->label14->TabIndex = 104;
			this->label14->Text = L"Id client";
			// 
			// numericUpDown12
			// 
			this->numericUpDown12->Location = System::Drawing::Point(371, 357);
			this->numericUpDown12->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDown12->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown12->Name = L"numericUpDown12";
			this->numericUpDown12->Size = System::Drawing::Size(78, 20);
			this->numericUpDown12->TabIndex = 103;
			this->numericUpDown12->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(1841, 258);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(62, 13);
			this->label16->TabIndex = 106;
			this->label16->Text = L"Id paiement";
			// 
			// numericUpDown13
			// 
			this->numericUpDown13->Location = System::Drawing::Point(1909, 257);
			this->numericUpDown13->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDown13->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown13->Name = L"numericUpDown13";
			this->numericUpDown13->Size = System::Drawing::Size(78, 20);
			this->numericUpDown13->TabIndex = 105;
			this->numericUpDown13->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(371, 233);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(78, 20);
			this->numericUpDown1->TabIndex = 109;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(297, 235);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 13);
			this->label1->TabIndex = 108;
			this->label1->Text = L"Id commande";
			// 
			// numericUpDown14
			// 
			this->numericUpDown14->Location = System::Drawing::Point(1398, 361);
			this->numericUpDown14->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown14->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDown14->Name = L"numericUpDown14";
			this->numericUpDown14->Size = System::Drawing::Size(78, 20);
			this->numericUpDown14->TabIndex = 111;
			this->numericUpDown14->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(1324, 363);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(71, 13);
			this->label22->TabIndex = 110;
			this->label22->Text = L"Id commande";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(1846, 232);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(54, 13);
			this->label23->TabIndex = 113;
			this->label23->Text = L"id Facture";
			// 
			// numericUpDown15
			// 
			this->numericUpDown15->Location = System::Drawing::Point(1909, 231);
			this->numericUpDown15->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDown15->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown15->Name = L"numericUpDown15";
			this->numericUpDown15->Size = System::Drawing::Size(78, 20);
			this->numericUpDown15->TabIndex = 112;
			this->numericUpDown15->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(2035, 463);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->numericUpDown15);
			this->Controls->Add(this->numericUpDown14);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->numericUpDown13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->numericUpDown12);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->numericUpDown11);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->numericUpDown10);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->numericUpDown9);
			this->Controls->Add(this->dataGridView4);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->dateTimePicker4);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->numericUpDown8);
			this->Controls->Add(this->numericUpDown7);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->numericUpDown6);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->numericUpDown5);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
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
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dgv_enr);
			this->Name = L"MyForm2";
			this->Text = L"GestionCommandes.exe";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown15))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dgv_enr->Refresh();
		this->oDs2 = this->oSvc2->selectionnerToutesLesCommandes("Commande");
		this->dgv_enr->DataSource = this->oDs2;
		this->dgv_enr->DataMember = "Commande";
	}
	private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
		this->oSvc2 = gcnew NS_Comp_Svc::CLservices();
		this->oSvc3 = gcnew NS_Comp_Svc::CLservices();
		this->oSvc4 = gcnew NS_Comp_Svc::CLservices();


		this->dgv_enr->Refresh();
		this->oDs2 = this->oSvc2->selectionnerToutesLesCommandes("Commande");
		this->dgv_enr->DataSource = this->oDs2;
		this->dgv_enr->DataMember = "Commande";

		this->dataGridView1->Refresh();
		this->oDs4 = this->oSvc4->selectionnerToutesLesFactures("Facture");
		this->dataGridView1->DataSource = this->oDs4;
		this->dataGridView1->DataMember = "Facture";

		this->dataGridView2->Refresh();
		this->oDs = this->oSvc->selectionnerToutesLesArticleCommande("Article");
		this->dataGridView2->DataSource = this->oDs;
		this->dataGridView2->DataMember = "Article";

		this->dataGridView4->Refresh();
		this->oDs3 = this->oSvc3->selectionnerToutLesPaiement("Paiement");
		this->dataGridView4->DataSource = this->oDs3;
		this->dataGridView4->DataMember = "Paiement";
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ adresse = this->textBox12->Text + "; " + this->numericUpDown9->Text + "; " + this->textBox2->Text;
		this->oSvc2->ajouterUnCommandes(this->numericUpDown10->Text->Replace(",", "."), this->numericUpDown4->Text->Replace(",", "."), this->dateTimePicker1->Text, adresse, this->dateTimePicker3->Text, this->numericUpDown12->Text);
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->ajouterUnArticleCommande(this->textBox3->Text, this->numericUpDown5->Text->Replace(",", "."), this->textBox9->Text, this->textBox10->Text, this->numericUpDown8->Text->Replace(",", "."), this->numericUpDown7->Text->Replace(",", "."));
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc3->ajouterUnPaiement(this->dateTimePicker4->Text, this->textBox11->Text, this->numericUpDown15->Text);
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc3->updateUnPaiement(this->dateTimePicker4->Text, this->textBox11->Text, this->numericUpDown13->Text);
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc3->supprimerPaiement(this->numericUpDown13->Text);
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->supprimerUnArticleCommande(this->numericUpDown6->Text);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc2->supprimerUnCommandes(this->numericUpDown1->Text);
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc4->supprimerUnFactures(this->numericUpDown2->Text);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ adresse = this->textBox12->Text + "; " + this->numericUpDown9->Text + "; " + this->textBox2->Text;
		this->oSvc2->updateUnCommandes(this->numericUpDown1->Text, this->numericUpDown4->Text->Replace(",", "."), this->numericUpDown10->Text, this->dateTimePicker1->Text, adresse, this->numericUpDown1->Text);
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->updateUnArticleCommande(this->numericUpDown5->Text->Replace(",", "."), this->textBox3->Text, this->textBox9->Text, this->textBox10->Text, this->numericUpDown8->Text->Replace(",", "."), this->numericUpDown7->Text->Replace(",", "."), this->numericUpDown6->Text);
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Refresh();
		this->oDs4 = this->oSvc4->selectionnerToutesLesFactures("Facture");
		this->dataGridView1->DataSource = this->oDs4;
		this->dataGridView1->DataMember = "Facture";
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ adresse = this->textBox4->Text + "; " + this->numericUpDown11->Text + "; " + this->textBox5->Text;
		this->oSvc4->ajouterUnFactures(this->textBox7->Text, this->textBox8->Text, this->dateTimePicker2->Text, adresse, this->textBox6->Text, this->numericUpDown14->Text);
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ adresse = this->textBox4->Text + "; " + this->numericUpDown11->Text + "; " + this->textBox5->Text;
		this->oSvc4->updateUnFactures(this->numericUpDown2->Text, this->textBox8->Text, this->textBox7->Text, this->dateTimePicker2->Text, adresse, this->textBox6->Text);
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView2->Refresh();
		this->oDs = this->oSvc->selectionnerToutesLesArticleCommande("Article");
		this->dataGridView2->DataSource = this->oDs;
		this->dataGridView2->DataMember = "Article";
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView4->Refresh();
		this->oDs3 = this->oSvc3->selectionnerToutLesPaiement("Paiement");
		this->dataGridView4->DataSource = this->oDs3;
		this->dataGridView4->DataMember = "Paiement";
	}
	};
}