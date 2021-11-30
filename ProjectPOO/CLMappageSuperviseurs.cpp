#include "CLMappageSuperviseurs.h"

System::String^ NS_Comp_Mappage::CLMappageSuperviseurs::Select(void)
{
	return "SELECT [id_superviseur], [nom_superviseur], [prenom_superviseur],[date_naissance_superviseur],Superviseurs.[id_superviseur], Superviseurs.nom_superviseur, Superviseurs.prenom_superviseur FROM Superviseurs INNER JOIN Superviseurs ON Superviseurs.id_superviseur = Superviseurs.id_superviseur; ";
}
System::String^ NS_Comp_Mappage::CLMappageSuperviseurs::Insert(void)
{
	return "INSERT INTO Superviseurs (nom_superviseur, prenom_superviseur,id_superviseur,date_naissance_superviseur) VALUES('" + this->nom_superviseur + "','" + this->prenom_superviseur + "";
}
System::String^ NS_Comp_Mappage::CLMappageSuperviseurs::Delete(void)
{
	return "DELETE FROM Client WHERE (nom_superviseur='" + this->nom_superviseur + "'AND prenom_superviseur='" + this->prenom_superviseur + "' AND id_superviseur=" + this->id_superviseur + ");";
}
System::String^ NS_Comp_Mappage::CLMappageSuperviseurs::Update(void)
{
	return "UPDATE Superviseurs SET nom_superviseur='" + this->nom_superviseur + "', prenom_superviseur='" + this->prenom_superviseur + "";
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
System::String^ NS_Comp_Mappage::CLMappageSuperviseurs::getid_superviseur(void) { return this->id_superviseur; }
System::String^ NS_Comp_Mappage::CLMappageSuperviseurs::getnom_superviseur(void) { return this->nom_superviseur; }
System::String^ NS_Comp_Mappage::CLMappageSuperviseurs::getprenom_superviseur(void) { return this->prenom_superviseur; }
