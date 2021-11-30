#include "CLMappageStocks.h"

System::String ^ NS_Comp_Mappage::CLMappageStocks::Select(void)
{
	return "SELECT Article.reference_article, Article.nom_article, Article.prix_produit_HT, Article.couleur, Article.nature, Stocks.quantite_stock, Stocks.seuil_reapro FROM Article INNER JOIN Stocks ON Article.reference_article = Stocks.reference_article;";
}
System::String^ NS_Comp_Mappage::CLMappageStocks::Insert(void)
{
	return "INSERT INTO Article(nom_article, prix_produit_HT, couleur, nature) VALUES ('" + this->nom_article + "', " + this->prix_produit_HT + ", '" + this->couleur + "','" + nature + "'); INSERT INTO Stocks(reference_article,quantite_stock, seuil_reapro) VALUES (SCOPE_IDENTITY()," + this->quantite_stock + "," + this->seuil_reapro + ");";
}
System::String^ NS_Comp_Mappage::CLMappageStocks::Delete(void)
{
	return "DELETE FROM Stocks WHERE reference_article=" + this->reference_article + ";DELETE FROM Article WHERE reference_article=" + this->reference_article + ";";
}
System::String^ NS_Comp_Mappage::CLMappageStocks::Update(void)
{
	return "";
}
void NS_Comp_Mappage::CLMappageStocks::setreference_article(System::String^ reference_article)
{
	this->reference_article = reference_article;
}
void NS_Comp_Mappage::CLMappageStocks::setprix_produit_HT(System::String^ prix_produit_HT)
{
	this->prix_produit_HT = prix_produit_HT;
}
void NS_Comp_Mappage::CLMappageStocks::setcouleur(System::String^ couleur)
{
	this->couleur = couleur;
}
void NS_Comp_Mappage::CLMappageStocks::setnature(System::String^ nature)
{
	this->nature = nature;
}
void NS_Comp_Mappage::CLMappageStocks::setquantite_stock(System::String^ quantite_stock)
{
	this->quantite_stock = quantite_stock;
}
void NS_Comp_Mappage::CLMappageStocks::setseuil_reapro(System::String^ seuil_reapro)
{
	this->seuil_reapro = seuil_reapro;
}
void NS_Comp_Mappage::CLMappageStocks::setnom_article(System::String^ nom_article)
{
	this->nom_article = nom_article;
}

System::String^ NS_Comp_Mappage::CLMappageStocks::getreference_article(void) { return this->reference_article; }
System::String^ NS_Comp_Mappage::CLMappageStocks::getprix_produit_HT(void) { return this->prix_produit_HT; }
System::String^ NS_Comp_Mappage::CLMappageStocks::getcouleur(void) { return this->couleur; }
System::String^ NS_Comp_Mappage::CLMappageStocks::getnature(void) { return this->nature; }
System::String^ NS_Comp_Mappage::CLMappageStocks::getquantite_stock(void) { return this->quantite_stock; }
System::String^ NS_Comp_Mappage::CLMappageStocks::getseuil_reapro(void) { return this->seuil_reapro; }
System::String^ NS_Comp_Mappage::CLMappageStocks::getnom_article(void) { return this->nom_article; }