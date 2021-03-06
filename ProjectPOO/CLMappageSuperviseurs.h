#pragma once
namespace NS_Comp_Mappage
{
	ref class CLMappageSuperviseurs
	{
	private:
		System::String^ sSql;
		System::String^ id_superviseur;
		System::String^ nom_superviseur;
		System::String^ prenom_superviseur;
		System::String^ date_naissance_superviseur;
		System::String^ adresse_superviseur;



	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setid_superviseur(System::String^);
		void setnom_superviseur(System::String^);
		void setprenom_superviseur(System::String^);
		void setadresse_superviseur(System::String^);
		void setdate_naissance_superviseur(System::String^);


		System::String^ getid_superviseur(void);
		System::String^ getnom_superviseur(void);
		System::String^ getprenom_superviseur(void);
		System::String^ getadresse_superviseur(void);
		System::String^ getdate_naissance_superviseur(void);

	};
}


