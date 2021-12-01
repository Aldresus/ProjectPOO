#pragma once
#include "CLMappageEmploye.h"
#include "CLCad.h"
#include "CLMappageSuperviseurs.h"
#include "CLMappageStocks.h"
#include "CLMappageClient.h"
#include "CLMappageStats.h"

namespace NS_Comp_Svc
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLCad^ oCad;
		NS_Comp_Mappage::CLMappageEmploye^ oMappEmploye;
		NS_Comp_Mappage::CLMappageSuperviseurs^ oMappSuperviseurs;
		NS_Comp_Mappage::CLMappageStocks^ oMappageStocks;
		NS_Comp_Mappage::CLMappageClient^ oMappClient;
		NS_Comp_Mappage::CLMappageStats^ oMappStats;


	public:
		CLservices(void);
		System::Data::DataSet^ selectionnerToutesLesEmploye(System::String^);
		void ajouterUnEmploye(System::String^, System::String^, System::String^, System::String^, System::String^);
		void supprimerUnEmploye(System::String^);
		void updateUnEmploye(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);

		System::Data::DataSet^ selectionnerToutesLesSuperviseurs(System::String^);
		void ajouterUnSuperviseur(System::String^, System::String^, System::String^, System::String^);
		void supprimerUnSuperviseur(System::String^);
		void updateUnSuperviseur(System::String^, System::String^, System::String^, System::String^, System::String^);

		System::Data::DataSet^ selectionnerToutLesArticles(System::String^);
		void ajouterUnArticle(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void supprimerUnArticle(System::String^);
		void updateUnArticle(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);

		System::Data::DataSet^ selectionnerToutesLesClient(System::String^);
		void ajouterUnePersonne(System::String^, System::String^, System::String^, System::String^, System::String^);
		void updateUnePersonne(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void supprimerUnePersonne(System::String^);

		System::Data::DataSet^ produitSousSeuilReapro(System::String^);
		System::Data::DataSet^ panierMoyenApresRemise(System::String^);
		System::Data::DataSet^ CASurUnMois(System::String^);
		System::Data::DataSet^ montantTotalDAchatPourChaqueClient(System::String^);
		System::Data::DataSet^ valeurAchatStock(System::String^);
		System::Data::DataSet^ valeurCommercialeStock(System::String^);
		System::Data::DataSet^ dixArticleLesPlusVendus(System::String^);
		System::Data::DataSet^ dixArticleLesMoinsVendus(System::String^);
	};
}



