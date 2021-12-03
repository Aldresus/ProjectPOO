#pragma once
namespace NS_Comp_Mappage
{
	ref class CLMappageCommandes
	{
	private:
		System::String^ sSql;
		System::String^ reference_commande;
		System::String^ total_HT;
		System::String^ TVA;
		System::String^ date_commande;
		System::String^ date_livraison;
		System::String^ adresse_livraison;
		System::String^ id_client;
		System::String^ id_commande;

	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setreference_commande(System::String^);
		void settotal_HT(System::String^);
		void setTVA(System::String^);
		void setdate_commande(System::String^);
		void setdate_livraison(System::String^);
		void setadresse_livraison(System::String^);
		void setid_client(System::String^);
		void setid_commande(System::String^);

		System::String^ getreference_commande(void);
		System::String^ gettotal_HT(void);
		System::String^ getTVA(void);
		System::String^ getdate_commande(void);
		System::String^ getdate_livraison(void);
		System::String^ getadresse_livraison(void);
		System::String^ getid_client(void);
		System::String^ getid_commande(void);

	};
}