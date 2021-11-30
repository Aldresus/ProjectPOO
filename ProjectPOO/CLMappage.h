#pragma once
namespace NS_Comp_Mappage
{
	ref class CLMappage
	{
	private:
		System::String^ sSql;
		int Id_employe;
		System::String^ Nom_employe;
		System::String^ Prenom_employe;
	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setId_employe(int);
		void setNom_employe(System::String^);
		void setPrenom_employe(System::String^);
		int getId_employe(void);
		System::String^ getNom_employe(void);
		System::String^ getPrenom_employe(void);
	};
}
