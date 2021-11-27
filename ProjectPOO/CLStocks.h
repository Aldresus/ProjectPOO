#pragma once

ref class CLStocks{
	private:
		int id_stocks;
		int quantite_stocks;
		int seuil_reapro;

	public:
		void setID_stocks(int id_stocks);
		int getID_stocks();
		void setQuantite_stocks(int quantite_stocks);
		int getQuantite_stocks();
		void setSeuil_reapro(int seuil_reapro);
		int getSeuil_reapro();
};

