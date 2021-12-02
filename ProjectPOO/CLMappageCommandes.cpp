#include "CLMappageCommandes.h"

System::String^ NS_Comp_Mappage::CLMappageCommandes::Select(void)
{
	return "select  Commande.reference_commande as 'reference commande', total_HT as 'total hors taxe', date_commande as 'date commande', date_livraison as 'date livraison', adresse_livraison as 'adresse livraison', Client.id_client as 'id client', nom_client as 'nom client', prenom_client as 'prenom client', ID_facture as 'Id facture', reference_article as 'reference article' from Client FULL OUTER JOIN Commande ON Commande.id_client = Client.id_client FULL OUTER JOIN Facture ON Facture.reference_commande = Commande.reference_commande full outer join Composer on composer.reference_article = Commande.reference_commande ";
}
System::String^ NS_Comp_Mappage::CLMappageCommandes::Insert(void)
{
	return "INSERT INTO Commande (total_HT, TVA,date_commande, adresse_livraison, date_livraison, id_client) VALUES('" + this->total_HT + "','" + this->TVA + "',CAST(' " + this->date_commande + "'AS date),'" + this->adresse_livraison + "',CAST(' " + this->date_livraison + "'AS date), " + this->id_client + ");";
}
System::String^ NS_Comp_Mappage::CLMappageCommandes::Delete(void)
{
	return "DELETE FROM Commande WHERE [reference_Commande]=" + this->reference_commande + ";";
}
System::String^ NS_Comp_Mappage::CLMappageCommandes::Update(void)
{
	return "UPDATE Commande SET total_HT='" + this->total_HT + "', TVA='" + this->TVA + "', date_commande='" + this->date_commande + "', date_commande='" + this->date_commande + "', adresse_livraison='" + this->adresse_livraison + " WHERE reference_commande=" + this->reference_commande + ";";
}


// reference commande -> ppnnYYYYvvv1
// p -> prenom / n->nom / YYYY->2021 / v->ville / 1->increment



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
void NS_Comp_Mappage::CLMappageCommandes::setid_client(System::String^ id_client)
{
	this->id_client = id_client;
}


System::String^ NS_Comp_Mappage::CLMappageCommandes::getreference_commande(void) { return this->reference_commande; }
System::String^ NS_Comp_Mappage::CLMappageCommandes::gettotal_HT(void) { return this->total_HT; }
System::String^ NS_Comp_Mappage::CLMappageCommandes::getTVA(void) { return this->TVA; }
System::String^ NS_Comp_Mappage::CLMappageCommandes::getdate_commande(void) { return this->date_commande; }
System::String^ NS_Comp_Mappage::CLMappageCommandes::getdate_livraison(void) { return this->date_livraison; }
System::String^ NS_Comp_Mappage::CLMappageCommandes::getadresse_livraison(void) { return this->adresse_livraison; }
System::String^ NS_Comp_Mappage::CLMappageCommandes::getid_client(void) { return this->id_client; }
