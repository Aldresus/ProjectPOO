#include "CLMappageStats.h"
System::String^ NS_Comp_Mappage::CLMappageStats::produitSousSeuilReapro(void)
{
	return "Select Article.reference_article, nom_article, quantite_stock from dbo.Article LEFT JOIN dbo.Stocks ON dbo.Article.reference_article = dbo.Stocks.reference_article where seuil_reapro > quantite_stock;";
}

System::String^ NS_Comp_Mappage::CLMappageStats::panierMoyenApresRemise(void)
{
	return " Select dbo.Client.id_client, AVG(total_HT*(1+TVA)) from dbo.Client LEFT JOIN dbo.Commande ON dbo.Client.id_client = dbo.Commande.id_client;";
}

System::String^ NS_Comp_Mappage::CLMappageStats::CASurUnMois(void)
{
	return "Select SUM(total_HT) as 'CA' from dbo.Commande LEFT JOIN dbo.Facture ON dbo.Commande.ID_facture = dbo.Facture.ID_facture Where date_facturation Between GETDATE() and GETDATE()-30;";
}

System::String^ NS_Comp_Mappage::CLMappageStats::montantTotalDAchatPourChaqueClient(void)
{
	return "Select dbo.Client.id_client, total_HT*(1+TVA/100) as 'Total' from dbo.Client LEFT JOIN dbo.Commande ON dbo.Client.id_client = dbo.Commande.id_client;";
}

System::String^ NS_Comp_Mappage::CLMappageStats::valeurAchatStock(void)
{
	return "Select * from dbo.Stocks LEFT JOIN dbo.Article ON dbo.Stocks.id_stocks = dbo.Article.id_stocks LEFT JOIN dbo.Composer ON dbo.Composer.reference_article = dbo.Article.reference_article LEFT JOIN dbo.Commande ON dbo.Commande.reference_commande = dbo.Composer.reference_commande;";
}

System::String^ NS_Comp_Mappage::CLMappageStats::valeurCommercialeStock(void)
{
	return "Select Dbo.Stocks.id_stocks, prix_produit_HT*quantite_stock from dbo.Stocks LEFT JOIN dbo.Article ON dbo.Stocks.reference_article = dbo.Article.reference_article;";
}

System::String^ NS_Comp_Mappage::CLMappageStats::dixArticleLesPlusVendus(void)
{
	return "Select TOP 10 nom_article from dbo.Article LEFT JOIN dbo.Composer ON dbo.Article.reference_article = dbo.Composer.reference_article ORDER BY nom_article DESC;";
}

System::String^ NS_Comp_Mappage::CLMappageStats::dixArticleLesMoinsVendus(void)
{
	return "Select TOP 10 nom_article from dbo.Article LEFT JOIN dbo.Composer ON dbo.Article.reference_article = dbo.Composer.reference_article ORDER BY nom_article ASC;";
}