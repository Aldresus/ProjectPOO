#pragma once
namespace NS_Comp_Mappage
{
	ref class CLMappageStats
	{
	private:

	public:
		System::String^ produitSousSeuilReapro(void);
		System::String^ panierMoyenApresRemise(void);
		System::String^ CASurUnMois(void);
		System::String^ montantTotalDAchatPourChaqueClient(void);
		System::String^ valeurAchatStock(void);
		System::String^ valeurCommercialeStock(void);
		System::String^ dixArticleLesPlusVendus(void);
		System::String^ dixArticleLesMoinsVendus(void);
	};
}