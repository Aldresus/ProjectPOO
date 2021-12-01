#include "CLMappageFactures.h"

System::String^ NS_Comp_Mappage::CLMappageFactures::Select(void)
{
	return "SELECT [id_facture] as 'facture', [nom_societe] as 'nom societe', [num_service] as 'numero service', [date_facturation] as 'date de facturation', [adresse_facturation] as 'adresse', [reference_commande] as 'reference commande' FROM Facture";
}
System::String^ NS_Comp_Mappage::CLMappageFactures::Insert(void)
{
	return "INSERT INTO Facture (nom_societe, num_service,date_facturation, adresse_facturation, date_livraison) VALUES('" + this->nom_societe + "','" + this->num_service + "',CAST(' " + this->date_facturation + "'AS date),'" + this->adresse_facturation + "');";
}
System::String^ NS_Comp_Mappage::CLMappageFactures::Delete(void)
{
	return "DELETE FROM Facture WHERE [id_facture]=" + this->id_facture + ";";
}
System::String^ NS_Comp_Mappage::CLMappageFactures::Update(void)
{
	return "UPDATE Facture SET nom_societe='" + this->nom_societe + "', num_service='" + this->num_service + "', date_facturation='" + this->date_facturation + "', date_facturation='" + this->date_facturation + "', adresse_facturation='" + this->adresse_facturation + " WHERE id_facture=" + this->id_facture + ";";
}
void NS_Comp_Mappage::CLMappageFactures::setid_facture(System::String^ id_facture)
{
	this->id_facture = id_facture;
}
void NS_Comp_Mappage::CLMappageFactures::setnom_societe(System::String^ nom_societe)
{
	this->nom_societe = nom_societe;
}
void NS_Comp_Mappage::CLMappageFactures::setnum_service(System::String^ num_service)
{
	this->num_service = num_service;
}
void NS_Comp_Mappage::CLMappageFactures::setdate_facturation(System::String^ date_facturation)
{
	this->date_facturation = date_facturation;
}

void NS_Comp_Mappage::CLMappageFactures::setadresse_facturation(System::String^ adresse_facturation)
{
	this->adresse_facturation = adresse_facturation;
}

void NS_Comp_Mappage::CLMappageFactures::setreference_commande(System::String^ reference_commande)
{
	this->reference_commande = reference_commande;
}

System::String^ NS_Comp_Mappage::CLMappageFactures::getid_facture(void) { return this->id_facture; }
System::String^ NS_Comp_Mappage::CLMappageFactures::getnom_societe(void) { return this->nom_societe; }
System::String^ NS_Comp_Mappage::CLMappageFactures::getnum_service(void) { return this->num_service; }
System::String^ NS_Comp_Mappage::CLMappageFactures::getdate_facturation(void) { return this->date_facturation; }
System::String^ NS_Comp_Mappage::CLMappageFactures::getadresse_facturation(void) { return this->adresse_facturation; }
System::String^ NS_Comp_Mappage::CLMappageFactures::getreference_commande(void) { return this->reference_commande; }