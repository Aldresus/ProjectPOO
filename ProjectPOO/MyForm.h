#pragma once
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"
#include "MyForm5.h"

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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label1;
	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button1->Location = System::Drawing::Point(0, 172);
			this->button1->MaximumSize = System::Drawing::Size(2300, 200);
			this->button1->MinimumSize = System::Drawing::Size(230, 20);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(284, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Statistiques";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->AutoSize = true;
			this->button2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button2->Location = System::Drawing::Point(0, 149);
			this->button2->MaximumSize = System::Drawing::Size(2300, 200);
			this->button2->MinimumSize = System::Drawing::Size(230, 20);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(284, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Gestion commandes";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->AutoSize = true;
			this->button3->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button3->Location = System::Drawing::Point(0, 126);
			this->button3->MaximumSize = System::Drawing::Size(2300, 200);
			this->button3->MinimumSize = System::Drawing::Size(230, 20);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(284, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Gestion stocks";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->AutoSize = true;
			this->button4->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button4->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button4->Location = System::Drawing::Point(0, 103);
			this->button4->MaximumSize = System::Drawing::Size(2300, 200);
			this->button4->MinimumSize = System::Drawing::Size(230, 20);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(284, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Gestion client";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->AutoSize = true;
			this->button5->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button5->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button5->Location = System::Drawing::Point(0, 80);
			this->button5->MaximumSize = System::Drawing::Size(2300, 200);
			this->button5->MinimumSize = System::Drawing::Size(230, 20);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(284, 23);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Gestion employés";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Roboto", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(83, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(116, 49);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Menu";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 195);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Logiciel de gestion.exe";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm1^ stats = gcnew MyForm1;
		stats->ShowDialog();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm2^ commandes = gcnew MyForm2;
		commandes->ShowDialog();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm3^ stocks = gcnew MyForm3;
		stocks->ShowDialog();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm4^ client = gcnew MyForm4;
		client->ShowDialog();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm5^ employe = gcnew MyForm5;
		employe->ShowDialog();
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
};
}
