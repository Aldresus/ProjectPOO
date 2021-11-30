#pragma once
namespace NS_Comp_Mappage
{
	ref class CLMappage
	{
	private:
		System::String^ sSql;
		int id_employe;
		System::String^ nom_employe;
		System::String^ prenom_employe;
	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setid_employe(int);
		void setnom_employe(System::String^);
		void setprenom_employe(System::String^);
		int getid_employe(void);
		System::String^ getnom_employe(void);
		System::String^ getprenom_employe(void);
	};
}
