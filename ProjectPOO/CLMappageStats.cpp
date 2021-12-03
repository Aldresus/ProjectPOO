#include "CLMappageStats.h"
System::String^ NS_Comp_Mappage::CLMappageStats::produitSousSeuilReapro(void)
{
	return "Select Article.reference_article, nom_article, quantite_stock from dbo.Article LEFT JOIN dbo.Stocks ON dbo.Article.reference_article = dbo.Stocks.reference_article where seuil_reapro > quantite_stock;";
}

System::String^ NS_Comp_Mappage::CLMappageStats::panierMoyenApresRemise(void)
{
	return "Select dbo.Client.id_client, AVG(total_HT*(1+TVA)*remise_commerciale) AS panier from dbo.Client FULL OUTER JOIN dbo.Commande ON dbo.Client.id_client = dbo.Commande.id_client FULL OUTER JOIN Composer ON Composer.id_commande = Commande.id_commande FULL OUTER JOIN Article ON Composer.reference_article = Article.reference_article GROUP BY Client.id_client";
}

System::String^ NS_Comp_Mappage::CLMappageStats::CASurUnMois(void)
{
	return "Select SUM(prix_produit_HT * quantite * TVA) from dbo.Article FULL OUTER JOIN dbo.Composer ON Article.reference_article = Composer.reference_article FULL OUTER JOIN Commande ON Composer.id_commande = Commande.id_commande FULL OUTER JOIN dbo.Facture ON dbo.Commande.id_commande = dbo.Facture.id_commande where date_facturation BETWEEN '1905-06-20' and '1905-07-20'";
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
	return "Select prix_produit_HT*quantite_stock*marge_commerciale*TVA AS Valeur_commerciale from dbo.Stocks FULL OUTER JOIN dbo.Article ON dbo.Stocks.reference_article = dbo.Article.reference_article FULL OUTER JOIN Composer ON Composer.reference_article = Article.reference_article FULL OUTER JOIN Commande ON Composer.reference_article = Commande.reference_commande";
}

System::String^ NS_Comp_Mappage::CLMappageStats::dixArticleLesPlusVendus(void)
{
	return "Select TOP 10 nom_article from dbo.Article LEFT JOIN dbo.Composer ON dbo.Article.reference_article = dbo.Composer.reference_article ORDER BY nom_article DESC;";
}

System::String^ NS_Comp_Mappage::CLMappageStats::dixArticleLesMoinsVendus(void)
{
	return "Select TOP 10 nom_article from dbo.Article LEFT JOIN dbo.Composer ON dbo.Article.reference_article = dbo.Composer.reference_article ORDER BY nom_article ASC;";
}