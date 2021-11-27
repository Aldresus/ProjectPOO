#pragma once
#include "CLAdresse.h"
#include "CLArticle.h"
#include "CLCad.h"
#include "CLClient.h"
#include "CLCommande.h"
#include "CLComposer.h"
#include "CLCouleurs.h"
#include "CLFacture.h"
#include "CLStocks.h"
#include "CLPaiement.h"
#include "ClNature.h"
#include "CLEmploye.h"
#include "CLSuperviseurs.h"





ref class CLService
{
	private:
		CLFacture oFacture;
		CLPaiement oPaiement;
		CLArticle oArticle;
		CLStocks oStocks;
		ClNature oNature;
		CLCouleurs oCouleurs;
		CLEmploye oEmploye;
		CLSuperviseurs oSuperviseurs;
		CLCommande oCommande;
		CLComposer oComposer;
		CLAdresse oAdresse;
		CLClient oClient;
		CLcad ocad;
		  
	public:
		CLService();
		~CLService();
		void setID(int id_adresse);
		int getID(void);
		void setNumero_voie(System::String^ numero_voie);
		System::String^ getNumero_voie(void);
		System::String^ getNom_rue(void);
		void setNom_rue(System::String^ nom_rue);
		void setNom_batiment(System::String^ nom_batiment);
		System::String^ getNom_batiment(void);
		void setNumero_etage(int numero_etage);
		int getNumero_etage(void);
		void setCode_postal(int code_postal);
		int getCode_postal(void);
		void setVille(System::String^ ville);
		System::String^ getVille(void);
		void setAutres_info(System::String^ autres_info);
		System::String^ getAutres_info(void);

};

