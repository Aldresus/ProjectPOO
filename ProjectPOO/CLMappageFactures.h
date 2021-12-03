namespace NS_Comp_Mappage
{
	ref class CLMappageFactures
	{
	private:
		System::String^ sSql;
		System::String^ id_commande;
		System::String^ num_service;
		System::String^ nom_societe;
		System::String^ date_facturation;
		System::String^ adresse_facturation;
		System::String^ id_facture;
		System::String^ logo;

	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);

		void setid_commande(System::String^);
		void setnum_service(System::String^);
		void setnom_societe(System::String^);
		void setdate_facturation(System::String^);
		void setadresse_facturation(System::String^);
		void setid_facture(System::String^);
		void setlogo(System::String^);

		System::String^ getid_commande(void);
		System::String^ getnum_service(void);
		System::String^ getnom_societe(void);
		System::String^ getdate_facturation(void);
		System::String^ getadresse_facturation(void);
		System::String^ getid_facture(void);
		System::String^ getlogo(void);
	};
}