#pragma once
namespace NS_Comp_Mappage
{
	ref class CLMappagePaiement
	{
		System::String^ sSql;
		System::String^ id_paiement;
		System::String^ date_paiement;
		System::String^ moyen_paiement;
		System::String^ id_facture_paiement;

	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);

		void setid_paiement(System::String^);
		void setdate_paiement(System::String^);
		void setmoyen_paiement(System::String^);
		void setid_facture_paiement(System::String^);

		System::String^ getid_paiement(void);
		System::String^ getdate_paiement(void);
		System::String^ getmoyen_paiement(void);
		System::String^ getid_facture_paiement(void);

	};
}