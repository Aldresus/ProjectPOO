#pragma once

ref class CLComposer{
	private:
		int reference_article;
		System::String^ reference_commande;
		int quantite;

	public:
		void setReference_article(int reference_article);
		int getReference_article();
		void setReference_commande(System::String^ reference_commande);
		System::String^ getReference_commande();
		void setQuantite(int quantite);
		int getQuantite();
};

