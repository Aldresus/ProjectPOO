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
		CLNature oNature;
		CLCouleurs oCouleurs;
		CLEmploye oEmploye;
		CLSuperviseurs oSuperviseurs;
		CLCommande oCommande;
		CLComposer oComposer;
		CLAdresse oAdresse;
		CLClient oClient;
		CLCad ocad;
		  
	/*public:
		//CAD
		System::Data::DataSet^ getRows(System::String^ sSql, System::String^ sDataTableName);
		void actionRows(System::String^);
		*/
};

