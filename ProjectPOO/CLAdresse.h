#pragma once


ref class CLAdresse{
	private:
		int id_adresse;
		int numero_voie;
		System::String^ nom_rue;
		System::String^ nom_batiment;
		int numero_etage;
		int code_postal;
		System::String^ ville;
		System::String^ autres_infos;

	public:
		CLAdresse();
		~CLAdresse();
		void setID_adresse(int id_adresse);
		int getID_adresse();
		void setNumero_voie(int numero_voie);
		int getNumero_voie();
		void setNom_rue(int nom_rue);
		int getNom_rue();
		void setNom_batiment(int nom_batiment);
		int getNom_batiment();
		void setNumero_etage(int numero_etage);
		int getNumero_etage();
		void setCode_postal(int code_postal);
		int getCode_postal();
		void setVille(System::String^ ville);
		System::String^ getVille();
		void setAutres_infos(System::String^ autres_infos);
		System::String^ getAutres_infos();
};

