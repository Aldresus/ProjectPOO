#include "CLMappageStocks.h"

System::String^ NS_Comp_Mappage::CLMappageStocks::Select(void)
{
	return "SELECT Article.reference_article, Article.nom_article, Article.prix_produit_HT, Article.couleur, Article.nature, Article.marge_commerciale, Article.remise_commerciale, Stocks.quantite_stock, Stocks.seuil_reapro , Stocks.demarque_inconnue FROM Article INNER JOIN Stocks ON Article.reference_article = Stocks.reference_article;";
}

System::String^ NS_Comp_Mappage::CLMappageStocks::Insert(void)
{
	return "INSERT INTO Article(nom_article, prix_produit_HT, couleur, nature, remise_commerciale, marge_commerciale) VALUES ('" + this->nom_article + "', " + this->prix_produit_HT + ", '" + this->couleur + "', '" + this->nature + "', " + this->remise_commerciale + ", " + this->marge_commerciale + "); INSERT INTO Stocks(reference_article,quantite_stock, seuil_reapro, demarque_inconnue) VALUES (SCOPE_IDENTITY(), " + this->quantite_stock + ", " + this->seuil_reapro + ", " + this->demarque_inconnue + ");";
}

System::String^ NS_Comp_Mappage::CLMappageStocks::Delete(void)
{
	return "DELETE FROM Stocks WHERE reference_article=" + this->reference_article + ";DELETE FROM Article WHERE reference_article=" + this->reference_article + ";";
}
System::String^ NS_Comp_Mappage::CLMappageStocks::Update(void)
{
	return "UPDATE Article SET nom_article='" + this->nom_article + "', [prix_produit_HT]=" + this->prix_produit_HT + ", [couleur]='" + this->couleur + "', [remise_commerciale]=" + this->remise_commerciale + ", [marge_commerciale]=" + this->marge_commerciale + " WHERE reference_article=" + this->reference_article + "; UPDATE Stocks SET quantite_stock=" + this->quantite_stock + ", seuil_reapro=" + this->seuil_reapro + ", demarque_inconnue=" + this->demarque_inconnue + " WHERE reference_article=" + this->reference_article + ";";
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
void NS_Comp_Mappage::CLMappageStocks::setremise_commerciale(System::String^ remise_commerciale)
{
	this->remise_commerciale = remise_commerciale;
}
void NS_Comp_Mappage::CLMappageStocks::setmarge_commerciale(System::String^ marge_commerciale)
{
	this->marge_commerciale = marge_commerciale;
}
void NS_Comp_Mappage::CLMappageStocks::setdemarque_inconnue(System::String^ demarque_inconnue)
{
	this->demarque_inconnue = demarque_inconnue;
}

System::String^ NS_Comp_Mappage::CLMappageStocks::getreference_article(void) { return this->reference_article; }
System::String^ NS_Comp_Mappage::CLMappageStocks::getprix_produit_HT(void) { return this->prix_produit_HT; }
System::String^ NS_Comp_Mappage::CLMappageStocks::getcouleur(void) { return this->couleur; }
System::String^ NS_Comp_Mappage::CLMappageStocks::getnature(void) { return this->nature; }
System::String^ NS_Comp_Mappage::CLMappageStocks::getquantite_stock(void) { return this->quantite_stock; }
System::String^ NS_Comp_Mappage::CLMappageStocks::getseuil_reapro(void) { return this->seuil_reapro; }
System::String^ NS_Comp_Mappage::CLMappageStocks::getnom_article(void) { return this->nom_article; }
System::String^ NS_Comp_Mappage::CLMappageStocks::getremise_commerciale(void) { return this->remise_commerciale; }
System::String^ NS_Comp_Mappage::CLMappageStocks::getmarge_commerciale(void) { return this->marge_commerciale; }
System::String^ NS_Comp_Mappage::CLMappageStocks::getdemarque_inconnue(void) { return this->demarque_inconnue; }