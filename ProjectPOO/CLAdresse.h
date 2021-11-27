#pragma once


ref class CLAdresse{
	private:
		int id_adresse;
		int numero_voie;
		System::String^ nom_rue;
		System::String^ nom_batiment;
		int numero_etage;
		System::String^ code_postal;
		System::String^ ville;
		System::String^ autres_infos;

	public:
		void setID_adresse(int id_adresse);
		int getID_adresse();
		void setNumero_voie(int numero_voie);
		int getNumero_voie();
		void setNom_rue(System::String^ nom_rue);
		System::String^ getNom_rue();
		void setNom_batiment(System::String^ nom_batiment);
		System::String^ getNom_batiment();
		void setNumero_etage(int numero_etage);
		int getNumero_etage();
		void setCode_postal(System::String^ code_postal);
		System::String^ getCode_postal();
		void setVille(System::String^ ville);
		System::String^ getVille();
		void setAutres_infos(System::String^ autres_infos);
		System::String^ getAutres_infos();
};

