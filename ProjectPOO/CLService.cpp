#include "CLService.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLCad();
	this->oMappageStocks = gcnew NS_Comp_Mappage::CLMappageStocks;
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutLesArticles(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappageStocks->Select();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CLservices::ajouterUnArticle(System::String^ nom_article, System::String^ prix_produit_HT, System::String^ couleur, System::String^ nature, System::String^ quantite_stock, System::String^ seuil_reapro, System::String^ remise_commerciale, System::String^ marge_commerciale)
{
	System::String^ sql;

	this->oMappageStocks->setnom_article(nom_article);
	this->oMappageStocks->setprix_produit_HT(prix_produit_HT);
	this->oMappageStocks->setcouleur(couleur);
	this->oMappageStocks->setnature(nature);
	this->oMappageStocks->setquantite_stock(quantite_stock);
	this->oMappageStocks->setseuil_reapro(seuil_reapro);
	this->oMappageStocks->setremise_commerciale(remise_commerciale);
	this->oMappageStocks->setmarge_commerciale(marge_commerciale);
	sql = this->oMappageStocks->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::supprimerUnArticle(System::String^ reference_article)
{
	System::String^ sql;

	this->oMappageStocks->setreference_article(reference_article);
	sql = this->oMappageStocks->Delete();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::updateUnArticle(System::String^ reference_article, System::String^ nom_article, System::String^ prix_produit_HT, System::String^ couleur, System::String^ nature, System::String^ quantite_stock, System::String^ seuil_reapro, System::String^ remise_commerciale, System::String^ marge_commerciale)
{
	System::String^ sql;

	this->oMappageStocks->setreference_article(reference_article);
	this->oMappageStocks->setnom_article(nom_article);
	this->oMappageStocks->setprix_produit_HT(prix_produit_HT);
	this->oMappageStocks->setcouleur(couleur);
	this->oMappageStocks->setnature(nature);
	this->oMappageStocks->setquantite_stock(quantite_stock);
	this->oMappageStocks->setseuil_reapro(seuil_reapro);
	this->oMappageStocks->setremise_commerciale(remise_commerciale);
	this->oMappageStocks->setmarge_commerciale(marge_commerciale);
	sql = this->oMappageStocks->Update();

	this->oCad->actionRows(sql);
}