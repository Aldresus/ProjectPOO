#pragma once

ref class CLEmploye{
	private:
		int id_employe;
		System::String^ nom_employe;
		System::String^ prenom_eploye;
		System::String^ date_naissance_employe;

	public:
		CLEmploye();
		~CLEmploye();
		void setID_employe(int id_employe);
		int getID_employe(void);
		void setNom_employe(System::String^ nom_employe);
		System::String^ getNom_employe(void);
		void setPrenom_employe(System::String^ prenom_eploye);
		System::String^ getPrenom_employe(void);
		void setDate_naissance_employe(System::String^ date_naissance_employe);
		System::String^ getDate_naissance_employe(void);
};

