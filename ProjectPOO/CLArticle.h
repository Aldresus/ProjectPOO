#pragma once

ref class CLArticle{
	private:
		int reference_article;
		System::String^ nom_article;
		float prix_produit_HT;
		System::String^ couleur;
		System::String^ nature;

	public:
		void setReference_article(int reference_article);
		int getReference_article();
		void setNom_article(System::String^ nom_article);
		System::String^ getNom_article();
		void setPrix_produit_HT(float prix_produit_HT);
		float getPrix_produit_HT();
		void setCouleur(System::String^ id_couleur);
		System::String^ getCouleur();
		void setNature(System::String^ id_nature);
		System::String^ getNature();
};

