#pragma once

ref class CLPaiement{
	private:
		int id_paiement;
		int numero_paiement;
		System::String^ date_paiement;
		System::String^ moyen_paiement;
		int id_facture;

	public:
		void setID_paiement(int id_paiement);
		int getID_paiement();
		void setNumero_paiement(int numero_paiement);
		int getNumero_paiement();
		void setDate_paiement(System::String^ date_paiement);
		System::String^ getDate_paiement();
		void setMoyen_paiement(System::String^ moyen_paiement);
		System::String^ getMoyen_paiement();
		void setID_facture(int id_facture);
		int getID_facture();
};

