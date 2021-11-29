#include "CLservices.h"

namespace Prosit_6 {

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
	protected:

	private: System::Windows::Forms::Button^ btn_load;
	private: System::Windows::Forms::Button^ btn_insert;
	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::Button^ btn_update;
	private: System::Windows::Forms::TextBox^ txt_Id;
	private: System::Windows::Forms::TextBox^ txt_total_HT;
	private: System::Windows::Forms::TextBox^ txt_TVA;
	private: System::Windows::Forms::TextBox^ txt_date_commande;
	private: System::Windows::Forms::TextBox^ txt_date_livraison;




	private: NS_Comp_Svc::CLservices^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::Button^ button1;
	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dgv_enr = (gcnew System::Windows::Forms::DataGridView());
			this->btn_load = (gcnew System::Windows::Forms::Button());
			this->btn_insert = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->txt_Id = (gcnew System::Windows::Forms::TextBox());
			this->txt_total_HT = (gcnew System::Windows::Forms::TextBox());
			this->txt_TVA = (gcnew System::Windows::Forms::TextBox());
			this->txt_date_commande = (gcnew System::Windows::Forms::TextBox());
			this->txt_date_livraison = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			this->SuspendLayout();
			// 
			// dgv_enr
			// 
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(16, 15);
			this->dgv_enr->Margin = System::Windows::Forms::Padding(4);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->RowHeadersWidth = 51;
			this->dgv_enr->Size = System::Drawing::Size(629, 185);
			this->dgv_enr->TabIndex = 0;
			// 
			// btn_load
			// 
			this->btn_load->Location = System::Drawing::Point(20, 225);
			this->btn_load->Margin = System::Windows::Forms::Padding(4);
			this->btn_load->Name = L"btn_load";
			this->btn_load->Size = System::Drawing::Size(100, 159);
			this->btn_load->TabIndex = 1;
			this->btn_load->Text = L"Load DB";
			this->btn_load->UseVisualStyleBackColor = true;
			this->btn_load->Click += gcnew System::EventHandler(this, &MyForm::btn_load_Click);
			// 
			// btn_insert
			// 
			this->btn_insert->Location = System::Drawing::Point(128, 225);
			this->btn_insert->Margin = System::Windows::Forms::Padding(4);
			this->btn_insert->Name = L"btn_insert";
			this->btn_insert->Size = System::Drawing::Size(100, 46);
			this->btn_insert->TabIndex = 2;
			this->btn_insert->Text = L"INS";
			this->btn_insert->UseVisualStyleBackColor = true;
			this->btn_insert->Click += gcnew System::EventHandler(this, &MyForm::btn_insert_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->Location = System::Drawing::Point(128, 338);
			this->btn_delete->Margin = System::Windows::Forms::Padding(4);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(100, 46);
			this->btn_delete->TabIndex = 3;
			this->btn_delete->Text = L"DEL";
			this->btn_delete->UseVisualStyleBackColor = true;
			this->btn_delete->Click += gcnew System::EventHandler(this, &MyForm::btn_delete_Click);
			// 
			// btn_update
			// 
			this->btn_update->Location = System::Drawing::Point(128, 282);
			this->btn_update->Margin = System::Windows::Forms::Padding(4);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(100, 46);
			this->btn_update->TabIndex = 4;
			this->btn_update->Text = L"UPD";
			this->btn_update->UseVisualStyleBackColor = true;
			this->btn_update->Click += gcnew System::EventHandler(this, &MyForm::btn_update_Click);
			// 
			// txt_total_HT
			// 
			this->txt_total_HT->Location = System::Drawing::Point(236, 225);
			this->txt_total_HT->Margin = System::Windows::Forms::Padding(4);
			this->txt_total_HT->Name = L"txt_Id";
			this->txt_total_HT->Size = System::Drawing::Size(408, 22);
			this->txt_total_HT->TabIndex = 5;
			// 
			// txt_total_HT
			// 
			this->txt_total_HT->Location = System::Drawing::Point(236, 225);
			this->txt_total_HT->Margin = System::Windows::Forms::Padding(4);
			this->txt_total_HT->Name = L"txt_total_HT";
			this->txt_total_HT->Size = System::Drawing::Size(408, 22);
			this->txt_total_HT->TabIndex = 6;
			// 
			// txt_TVA
			// 
			this->txt_TVA->Location = System::Drawing::Point(236, 257);
			this->txt_TVA->Margin = System::Windows::Forms::Padding(4);
			this->txt_TVA->Name = L"txt_TVA";
			this->txt_TVA->Size = System::Drawing::Size(408, 22);
			this->txt_TVA->TabIndex = 7;
			// 
			// txt_date_commande
			// 
			this->txt_date_commande->Location = System::Drawing::Point(236, 293);
			this->txt_date_commande->Margin = System::Windows::Forms::Padding(4);
			this->txt_date_commande->Name = L"txt_date_commande";
			this->txt_date_commande->Size = System::Drawing::Size(408, 22);
			this->txt_date_commande->TabIndex = 8;
			// 
			// txt_date_livraison
			// 
			this->txt_date_livraison->Location = System::Drawing::Point(236, 293);
			this->txt_date_livraison->Margin = System::Windows::Forms::Padding(4);
			this->txt_date_livraison->Name = L"txt_date_livraison";
			this->txt_date_livraison->Size = System::Drawing::Size(408, 22);
			this->txt_date_livraison->TabIndex = 9;
			// 
			// btn load table adresse
			// 
			this->button1->Location = System::Drawing::Point(309, 338);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 45);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Load table adresse";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(675, 409);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txt_date_livraison);
			this->Controls->Add(this->txt_date_commande);
			this->Controls->Add(this->txt_TVA);
			this->Controls->Add(this->txt_total_HT);
			this->Controls->Add(this->txt_Id);
			this->Controls->Add(this->btn_update);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->btn_insert);
			this->Controls->Add(this->btn_load);
			this->Controls->Add(this->dgv_enr);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_load_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerToutesLesCommandes("Rsl");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rsl";
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
	}
	private: System::Void btn_insert_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc->ajouterUneCommande(Convert::ToInt32(this->txt_total_HT->Text), Convert::ToInt32(this->txt_TVA->Text), Convert::ToDateTime(this->txt_date_commande), Convert::ToDateTime(this->txt_date_livraison));
	}
	private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->updateUneCommande(Convert::ToInt32(this->txt_Id->Text) , Convert::ToInt32(this->txt_total_HT->Text), Convert::ToInt32(this->txt_TVA->Text), Convert::ToDateTime(this->txt_date_commande), Convert::ToDateTime(this->txt_date_livraison));
	}
private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc->supprimerUneCommande();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dgv_enr->Refresh();
	this->oDs = this->oSvc->selectionnerToutesLesCommandes1("Rsl");
	this->dgv_enr->DataSource = this->oDs;
	this->dgv_enr->DataMember = "Rsl";
}
};
}
