#pragma once

ref class CLFacture{
	private:
		int id_facture;
		System::String^ date_facturation;
		System::String^ logo;
		System::String^ num_service;
		System::String^ nom_societe;

	public:
		void setID_facture(int id_facture);
		int getID_facture();
		void setDate_facturation(System::String^ date_facturation);
		System::String^ getDate_facturation();
		void setLogo(System::String^ logo);
		System::String^ getLogo();
		void setNum_service(System::String^ num_service);
		System::String^ getNum_service();
		void setNom_societe(System::String^ nom_societe);
		System::String^ getNom_societe();
};

