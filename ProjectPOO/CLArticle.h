#pragma once

ref class CLArticle{
	private:
		int reference_article;
		System::String^ nom_article;
		int prix_produit_HT;
		int id_couleur;
		int id_nature;
		int id_stocks;

	public:
		CLArticle();
		~CLArticle();
		void setReference_article(int reference_article);
		int getReference_article();
		void setNom_article(System::String^ nom_article);
		System::String^ getNom_article();
		void setPrix_produit_HT(int prix_produit_HT);
		int getPrix_produit_HT();
		void setID_couleur(int id_couleur);
		int getID_couleur();
		void setID_nature(int id_nature);
		int getID_nature();
		void setID_stocks(int id_stocks);
		int getID_stocks();
};

