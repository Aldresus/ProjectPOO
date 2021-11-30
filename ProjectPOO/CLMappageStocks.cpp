#include "CLMappageStocks.h"

System::String ^ NS_Comp_Mappage::CLMappageStocks::Select(void)
{
	return "SELECT Article.reference_article, Article.nom_article, Article.prix_produit_HT, Article.couleur, Article.nature, Stocks.quantite_stock, Stocks.seuil_reapro FROM Article INNER JOIN Stocks ON Article.id_stocks = Stocks.id_stocks;";
}
System::String^ NS_Comp_Mappage::CLMappageStocks::Insert(void)
{
	return "INSERT INTO Employe (nom_employe, prenom_employe,id_superviseur,date_naissance_employe, adresse_employe) VALUES('" + this->nom_employe + "','" + this->prenom_employe + "'," + this->id_superviseur_employe + ",CAST(' " + this->date_naissance_employe + "'AS date),'" + this->adresse_employe + "');";
}
System::String^ NS_Comp_Mappage::CLMappageStocks::Delete(void)
{
	return "DELETE FROM Employe WHERE [ID_employe]=" + this->id_employe + ";";
}
System::String^ NS_Comp_Mappage::CLMappageStocks::Update(void)
{
	return "UPDATE Employe SET nom_employe='" + this->nom_employe + "', prenom_employe='" + this->prenom_employe + "', date_naissance_employe='" + this->date_naissance_employe + "', adresse_employe='" + this->adresse_employe + "', id_superviseur=" + this->id_superviseur_employe + " WHERE id_employe=" + this->id_employe + ";";
}
void NS_Comp_Mappage::CLMappageStocks::setid_employe(System::String^ id_employe)
{
	this->id_employe = id_employe;
}
void NS_Comp_Mappage::CLMappageStocks::setnom_employe(System::String^ nom_employe)
{
	this->nom_employe = nom_employe;
}
void NS_Comp_Mappage::CLMappageStocks::setprenom_employe(System::String^ prenom_employe)
{
	this->prenom_employe = prenom_employe;
}
void NS_Comp_Mappage::CLMappageStocks::setdate_naissance_employe(System::String^ date_naissance_employe)
{
	this->date_naissance_employe = date_naissance_employe;
}
void NS_Comp_Mappage::CLMappageStocks::setid_superviseur_employe(System::String^ id_superviseur)
{
	this->id_superviseur_employe = id_superviseur;
}
void NS_Comp_Mappage::CLMappageStocks::setadresse_employe(System::String^ adresse_employe)
{
	this->adresse_employe = adresse_employe;
}

System::String^ NS_Comp_Mappage::CLMappageStocks::getid_employe(void) { return this->id_employe; }
System::String^ NS_Comp_Mappage::CLMappageStocks::getnom_employe(void) { return this->nom_employe; }
System::String^ NS_Comp_Mappage::CLMappageStocks::getprenom_employe(void) { return this->prenom_employe; }
System::String^ NS_Comp_Mappage::CLMappageStocks::getdate_naissance_employe(void) { return this->date_naissance_employe; }
System::String^ NS_Comp_Mappage::CLMappageStocks::getid_superviseur_employe(void) { return this->id_superviseur_employe; }
System::String^ NS_Comp_Mappage::CLMappageStocks::getadresse_employe(void) { return this->adresse_employe; }