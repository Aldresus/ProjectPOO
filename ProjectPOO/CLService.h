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
		//Facture
		void setID_facture(int id_facture);
		int getID_facture();
		void setDate_facturation(System::String^ date_facturation);
		System::String^ getDate_facturation();
		void setLogo(System::String^ logo);
		System::String^ getLogo();
		void setNum_service(System::String^ num_service);
		System::String^ getNum_service();
		void setNom_societe(System::String^ nom_societe);
		System::String^ getNom_societe();

		//Paiement
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

		//Article
		void setReference_article(int reference_article);
		int getReference_article();
		void setNom_article(System::String^ nom_article);
		System::String^ getNom_article();
		void setPrix_produit_HT(int prix_produit_HT);
		int getPrix_produit_HT();
		void setID_couleur(int id_couleur);
		int getID_couleur();
		void setID_nature(int id_nature);
		int getID_nature();
		void setID_stocks(int id_stocks);
		int getID_stocks();

		//Stocks
		void setID_stocks(int id_stocks);
		int getID_stocks(void);
		void setQuantite_stocks(int quantite_stocks);
		int getQuantite_stocks(void);
		void setSeuil_reapro(int seuil_reapro);
		int getSeuil_reapro(void);

		//Nature
		void setID_nature(int id_nature);
		int getID_nature();
		void setNature(System::String^ nature);
		System::String^ getNature();

		//Couleurs
		void setID_couleur(int id_couleur);
		int getID_couleur();
		void setCouleur(System::String^ couleur);
		int getCouleur();

		//Employe
		void setID_employe(int id_employe);
		int getID_employe(void);
		void setNom_employe(System::String^ nom_employe);
		System::String^ getNom_employe(void);
		void setPrenom_employe(System::String^ prenom_eploye);
		System::String^ getPrenom_employe(void);
		void setDate_naissance_employe(System::String^ date_naissance_employe);
		System::String^ getDate_naissance_employe(void);

		//Superviseurs
		void setID_personnel(int id_personnel);
		int getID_personnel();

		//Commande
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

		//Composer
		void setReference_article(int reference_article);
		int getReference_article();
		void setReference_commande(System::String^ reference_commande);
		System::String^ getReference_commande();
		void setQuantite(int quantite);
		int getQuantite();

		//Adresse
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

		//Client
		void setID_client(int id_client);
		int getID_client();
		void setNom_client(System::String^ nom_client);
		System::String^ getNom_client();
		void setDate_de_naissance(System::String^ date_de_naissance);
		System::String^ getDate_de_naissance();
		void setDate_inscription(System::String^ date_inscription);
		System::String^ getDate_inscription();

		//CAD
		System::Data::DataSet^ getRows(System::String^ sSql, System::String^ sDataTableName);
		void actionRows(System::String^);

};

