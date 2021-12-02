#include "CLMappagePaiement.h"

System::String^ NS_Comp_Mappage::CLMappagePaiement::Select(void)
{
	return "SELECT id_payement, numero_paiement, CAST(date_paiement AS DATE) as 'date', moyen_paiement, ID_facture FROM Paiement;";
}
System::String^ NS_Comp_Mappage::CLMappagePaiement::Insert(void)
{
	return "INSERT INTO Paiement(numero_paiement, date_paiement, moyen_paiement, ID_facture) SELECT ISNULL(MAX(numero_paiement)+1,1),'" + this->date_paiement + "', '" + this->moyen_paiement + "', " + this->id_facture_paiement + " FROM Paiement WHERE ID_facture=" + this->id_facture_paiement + ";";
}
System::String^ NS_Comp_Mappage::CLMappagePaiement::Delete(void)
{
	return "DELETE FROM Paiement WHERE [id_payement]=" + this->id_paiement + ";";
}
System::String^ NS_Comp_Mappage::CLMappagePaiement::Update(void)
{
	return "UPDATE Paiement SET [date_paiement]='" + this->date_paiement + "',[moyen_paiement]='" + this->moyen_paiement + "' WHERE id_payement=" + this->id_paiement + ";";
}


void NS_Comp_Mappage::CLMappagePaiement::setid_paiement(System::String^ id_paiement)
{
	this->id_paiement = id_paiement;
}
void NS_Comp_Mappage::CLMappagePaiement::setdate_paiement(System::String^ date_paiement)
{
	this->date_paiement = date_paiement;
}
void NS_Comp_Mappage::CLMappagePaiement::setmoyen_paiement(System::String^ moyen_paiement)
{
	this->moyen_paiement = moyen_paiement;
}
void NS_Comp_Mappage::CLMappagePaiement::setid_facture_paiement(System::String^ id_facture_paiement)
{
	this->id_facture_paiement = id_facture_paiement;
}

System::String^ NS_Comp_Mappage::CLMappagePaiement::getid_paiement(void) { return this->id_paiement; }
System::String^ NS_Comp_Mappage::CLMappagePaiement::getdate_paiement(void) { return this->date_paiement; }
System::String^ NS_Comp_Mappage::CLMappagePaiement::getmoyen_paiement(void) { return this->moyen_paiement; }
System::String^ NS_Comp_Mappage::CLMappagePaiement::getid_facture_paiement(void) { return this->id_facture_paiement; }