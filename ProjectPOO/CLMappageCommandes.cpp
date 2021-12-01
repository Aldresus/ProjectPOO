#include "CLMappageCommandes.h"

System::String^ NS_Comp_Mappage::CLMappageCommandes::Select(void)
{
	return "SELECT [reference_commande] as 'reference', [total_HT] as 'total hors taxe', [TVA] as 'TVA', [date_commande] as 'date de commande', [date_livraison] as 'date de livraison', [adresse_livraison] as 'adresse' FROM Commande";
}
System::String^ NS_Comp_Mappage::CLMappageCommandes::Insert(void)
{
	return "INSERT INTO Commande (total_HT, TVA,date_commande, adresse_livraison, date_livraison) VALUES('" + this->total_HT + "','" + this->TVA + "',CAST(' " + this->date_commande + "'AS date)," + this->adresse_livraison + ",'CAST(' " + this->date_livraison + "'AS date2)');";
}
System::String^ NS_Comp_Mappage::CLMappageCommandes::Delete(void)
{
	return "DELETE FROM Commande WHERE [ID_employe]=" + this->reference_commande + ";";
}
System::String^ NS_Comp_Mappage::CLMappageCommandes::Update(void)
{
	return "UPDATE Commande SET total_HT='" + this->total_HT + "', TVA='" + this->TVA + "', date_commande='" + this->date_commande + "', date_commande='" + this->date_commande + "', adresse_livraison='" + this->adresse_livraison + " WHERE reference_commande=" + this->reference_commande + ";";
}
void NS_Comp_Mappage::CLMappageCommandes::setreference_commande(System::String^ reference_commande)
{
	this->reference_commande = reference_commande;
}
void NS_Comp_Mappage::CLMappageCommandes::settotal_HT(System::String^ total_HT)
{
	this->total_HT = total_HT;
}
void NS_Comp_Mappage::CLMappageCommandes::setTVA(System::String^ TVA)
{
	this->TVA = TVA;
}
void NS_Comp_Mappage::CLMappageCommandes::setdate_commande(System::String^ date_commande)
{
	this->date_commande = date_commande;
}
void NS_Comp_Mappage::CLMappageCommandes::setdate_livraison(System::String^ date_livraison)
{
	this->date_livraison = date_livraison;
}
void NS_Comp_Mappage::CLMappageCommandes::setadresse_livraison(System::String^ adresse_livraison)
{
	this->adresse_livraison = adresse_livraison;
}

System::String^ NS_Comp_Mappage::CLMappageCommandes::getreference_commande(void) { return this->reference_commande; }
System::String^ NS_Comp_Mappage::CLMappageCommandes::gettotal_HT(void) { return this->total_HT; }
System::String^ NS_Comp_Mappage::CLMappageCommandes::getTVA(void) { return this->TVA; }
System::String^ NS_Comp_Mappage::CLMappageCommandes::getdate_commande(void) { return this->date_commande; }
System::String^ NS_Comp_Mappage::CLMappageCommandes::getdate_livraison(void) { return this->date_livraison; }
System::String^ NS_Comp_Mappage::CLMappageCommandes::getadresse_livraison(void) { return this->adresse_livraison; }