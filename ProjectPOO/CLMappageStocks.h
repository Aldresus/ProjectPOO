#pragma once
namespace NS_Comp_Mappage
{
	ref class CLMappageStocks
	{
	private:
		System::String^ sSql;
		System::String^ reference_article;
		System::String^ nom_article;
		System::String^ prix_produit_HT;
		System::String^ couleur;
		System::String^ nature;
		System::String^ quantite_stock;
		System::String^ seuil_reapro;

	public:
		System::String^ Select(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		System::String^ Insert(void);


		void setreference_article(System::String^);
		void setprix_produit_HT(System::String^);
		void setcouleur(System::String^);
		void setnature(System::String^);
		void setquantite_stock(System::String^);
		void setseuil_reapro(System::String^);
		void setnom_article(System::String^);

		System::String^ getreference_article(void);
		System::String^ getprix_produit_HT(void);
		System::String^ getcouleur(void);
		System::String^ getnature(void);
		System::String^ getquantite_stock(void);
		System::String^ getseuil_reapro(void);
		System::String^ getnom_article(void);
	};
}