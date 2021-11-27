#pragma once

ref class CLCommande{
	private:
		System::String^ reference_commande;
		float total_HT;
		int TVA;
		System::String^ date_commande;
		System::String^ date_livraison;

	public:
		void setReference_commande(System::String^ reference_commande);
		System::String^ getReference_commande();
		void setTotal_HT(float total_HT);
		float getTotal_HT();
		void setTVA(int TVA);
		int getTVA();
		void setDate_commande(System::String^ date_commande);
		System::String^ getDate_commande();
		void setDate_livraison(System::String^ date_livraison);
		System::String^ getDate_livraison();
};

