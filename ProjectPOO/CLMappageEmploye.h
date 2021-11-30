#pragma once
namespace NS_Comp_Mappage
{
	ref class CLMappageEmploye
	{
	private:
		System::String^ sSql;
		System::String^ id_employe;
		System::String^ nom_employe;
		System::String^ prenom_employe;
		System::String^ date_naissance_employe;
		System::String^ id_superviseur_employe;
		System::String^ adresse_employe;

	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setid_employe(System::String^);
		void setnom_employe(System::String^);
		void setprenom_employe(System::String^);
		void setdate_naissance_employe(System::String^);
		void setid_superviseur_employe(System::String^);
		void setadresse_employe(System::String^);

		System::String^ getid_employe(void);
		System::String^ getnom_employe(void);
		System::String^ getprenom_employe(void);
		System::String^ getdate_naissance_employe(void);
		System::String^ getid_superviseur_employe(void);
		System::String^ getadresse_employe(void);
	};
}