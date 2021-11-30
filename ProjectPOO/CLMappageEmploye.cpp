
#include "CLMappageEmploye.h"

System::String^ NS_Comp_Mappage::CLMappageEmploye::Select(void)
{
	return "SELECT [id_employe] as 'id', [nom_employe] as 'nom', [prenom_employe] as 'prenom', [date_naissance_employe] as 'date de naissance', adresse_employe as 'adresse', Superviseurs.nom_superviseur as 'nom superviseur', Superviseurs.prenom_superviseur as 'prenom superviseur' FROM Employe INNER JOIN Superviseurs ON Employe.id_superviseur = Superviseurs.id_superviseur; ";
}
System::String^ NS_Comp_Mappage::CLMappageEmploye::Insert(void)
{
	return "INSERT INTO Employe (nom_employe, prenom_employe,id_superviseur,date_naissance_employe, adresse_employe) VALUES('" + this->nom_employe + "','" + this->prenom_employe + "'," + this->id_superviseur_employe + ",CAST(' " + this->date_naissance_employe +"'AS date),'" + this->adresse_employe + "');";
}
System::String^ NS_Comp_Mappage::CLMappageEmploye::Delete(void)
{
	return "DELETE FROM Employe WHERE [ID_employe]=" + this->id_employe + ";";
}
System::String^ NS_Comp_Mappage::CLMappageEmploye::Update(void)
{
	return "UPDATE Employe SET nom_employe='" + this->nom_employe + "', prenom_employe='" + this->prenom_employe + "', date_naissance_employe='" + this->date_naissance_employe + "', adresse_employe='" + this->adresse_employe +"', id_superviseur=" + this->id_superviseur_employe + " WHERE id_employe=" + this->id_employe + ";";
}
void NS_Comp_Mappage::CLMappageEmploye::setid_employe(System::String^ id_employe)
{
	this->id_employe = id_employe;
}
void NS_Comp_Mappage::CLMappageEmploye::setnom_employe(System::String^ nom_employe)
{
	this->nom_employe = nom_employe;
}
void NS_Comp_Mappage::CLMappageEmploye::setprenom_employe(System::String^ prenom_employe)
{
	this->prenom_employe = prenom_employe;
}
void NS_Comp_Mappage::CLMappageEmploye::setdate_naissance_employe(System::String^ date_naissance_employe)
{
	this->date_naissance_employe = date_naissance_employe;
}
void NS_Comp_Mappage::CLMappageEmploye::setid_superviseur_employe(System::String^ id_superviseur)
{
	this->id_superviseur_employe = id_superviseur;
}
void NS_Comp_Mappage::CLMappageEmploye::setadresse_employe(System::String^ adresse_employe)
{
	this->adresse_employe = adresse_employe;
}

System::String^ NS_Comp_Mappage::CLMappageEmploye::getid_employe(void) { return this->id_employe; }
System::String^ NS_Comp_Mappage::CLMappageEmploye::getnom_employe(void) { return this->nom_employe; }
System::String^ NS_Comp_Mappage::CLMappageEmploye::getprenom_employe(void) { return this->prenom_employe; }
System::String^ NS_Comp_Mappage::CLMappageEmploye::getdate_naissance_employe(void) { return this->date_naissance_employe; }
System::String^ NS_Comp_Mappage::CLMappageEmploye::getid_superviseur_employe(void) { return this->id_superviseur_employe; }
System::String^ NS_Comp_Mappage::CLMappageEmploye::getadresse_employe(void) { return this->adresse_employe; }