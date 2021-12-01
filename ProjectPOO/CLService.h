#pragma once
#include "CLCad.h"
#include "CLMappageStats.h"

namespace NS_Comp_Svc
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLCad^ oCad;
		NS_Comp_Mappage::CLMappageStats^ oMappStats;


	public:
		CLservices(void);
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