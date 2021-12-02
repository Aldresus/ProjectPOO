#include "CLMappageSuperviseurs.h"

System::String^ NS_Comp_Mappage::CLMappageSuperviseurs::Select(void)
{
	return "SELECT id_superviseur as 'id', nom_superviseur as 'nom', prenom_superviseur as 'prenom', date_naissance_superviseur as 'date de naissance', adresse_superviseur as 'adresse' FROM Superviseurs;";
}
System::String^ NS_Comp_Mappage::CLMappageSuperviseurs::Insert(void)
{
	return "INSERT INTO Superviseurs (nom_superviseur, prenom_superviseur, date_naissance_superviseur, adresse_superviseur) VALUES('" + this->nom_superviseur + "','" + this->prenom_superviseur + "','" + this->date_naissance_superviseur + "','" + this->adresse_superviseur + "');";
}
System::String^ NS_Comp_Mappage::CLMappageSuperviseurs::Delete(void)
{
	return "DELETE FROM Superviseurs WHERE [id_superviseur]=" + this->id_superviseur + ";";
}
System::String^ NS_Comp_Mappage::CLMappageSuperviseurs::Update(void)
{
	return "UPDATE Superviseurs SET nom_superviseur='" + this->nom_superviseur + "', prenom_superviseur='" + this->prenom_superviseur + "', date_naissance_superviseur='" + this->date_naissance_superviseur + "', adresse_superviseur='" + this->adresse_superviseur + "' WHERE id_superviseur=" + this->id_superviseur + ";";
}

void NS_Comp_Mappage::CLMappageSuperviseurs::setid_superviseur(System::String^ id_superviseur)
{
	this->id_superviseur = id_superviseur;
}

void NS_Comp_Mappage::CLMappageSuperviseurs::setnom_superviseur(System::String^ nom_superviseur)
{
	this->nom_superviseur = nom_superviseur;
}

void NS_Comp_Mappage::CLMappageSuperviseurs::setprenom_superviseur(System::String^ prenom_superviseur)
{
	this->prenom_superviseur = prenom_superviseur;
}
void NS_Comp_Mappage::CLMappageSuperviseurs::setadresse_superviseur(System::String^ adresse_superviseur)
{
	this->adresse_superviseur = adresse_superviseur;
}
void NS_Comp_Mappage::CLMappageSuperviseurs::setdate_naissance_superviseur(System::String^ date_naissance_superviseur)
{
	this->date_naissance_superviseur = date_naissance_superviseur;
}
System::String^ NS_Comp_Mappage::CLMappageSuperviseurs::getid_superviseur(void) { return this->id_superviseur; }
System::String^ NS_Comp_Mappage::CLMappageSuperviseurs::getnom_superviseur(void) { return this->nom_superviseur; }
System::String^ NS_Comp_Mappage::CLMappageSuperviseurs::getprenom_superviseur(void) { return this->prenom_superviseur; }
System::String^ NS_Comp_Mappage::CLMappageSuperviseurs::getadresse_superviseur(void) { return this->adresse_superviseur; }
System::String^ NS_Comp_Mappage::CLMappageSuperviseurs::getdate_naissance_superviseur(void) { return this->date_naissance_superviseur; }