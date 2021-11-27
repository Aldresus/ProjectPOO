#pragma once

ref class CLCouleurs{
	private:
		int id_couleur;
		System::String^ couleur;

	public:
		CLCouleurs();
		~CLCouleurs();
		void setID_couleur(int id_couleur);
		int getID_couleur();
		void setCouleur(System::String^ couleur);
		int getCouleur();
};

