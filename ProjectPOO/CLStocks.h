#pragma once

ref class CLStocks{
	private:
		int id_stocks;
		int quantite_stocks;
		int seuil_reapro;

	public:
		CLStocks();
		~CLStocks();
		void setID_stocks(int id_stocks);
		int getID_stocks(void);
		void setQuantite_stocks(int quantite_stocks);
		int getQuantite_stocks(void);
		void setSeuil_reapro(int seuil_reapro);
		int getSeuil_reapro(void);
};

