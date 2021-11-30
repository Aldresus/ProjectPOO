
#include "CLMappage.h"

System::String^ NS_Comp_Mappage::CLMappage::Select(void)
{
	return "SELECT [id_employe], [nom_employe], [prenom_employe],[date_naissance_employe],Employe.[id_superviseur], Superviseurs.nom_superviseur, Superviseurs.prenom_superviseur FROM Employe INNER JOIN Superviseurs ON Employe.id_superviseur = Superviseurs.id_superviseur; ";
}
System::String^ NS_Comp_Mappage::CLMappage::Insert(void)
{
	return "INSERT INTO Employe (nom_employe, prenom_employe,id_superviseur,date_naissance_employe) VALUES('" + this->nom_employe + "','" + this->prenom_employe + "', 1,CAST(' " + this->date_naissance_employe +"'AS date)); ";
}
System::String^ NS_Comp_Mappage::CLMappage::Delete(void)
{
	return "DELETE FROM Client WHERE (nom_employe='" + this->nom_employe + "'AND prenom_employe='" + this->prenom_employe + "' AND id_employe=" + this->id_employe + ");";
}
System::String^ NS_Comp_Mappage::CLMappage::Update(void)
{
	return "UPDATE Employe SET nom_employe='" + this->nom_employe + "', prenom_employe='" + this->prenom_employe + "', date_naissance_employe='" + this->date_naissance_employe + "' WHERE id_employe=" + id_employe + ";";
}
void NS_Comp_Mappage::CLMappage::setid_employe(System::String^ id_employe)
{
	this->id_employe = id_employe;
}
void NS_Comp_Mappage::CLMappage::setnom_employe(System::String^ nom_employe)
{
	this->nom_employe = nom_employe;
}
void NS_Comp_Mappage::CLMappage::setprenom_employe(System::String^ prenom_employe)
{
	this->prenom_employe = prenom_employe;
}
void NS_Comp_Mappage::CLMappage::setdate_naissance_employe(System::String^ date_naissance_employe)
{
	this->date_naissance_employe = date_naissance_employe;
}
void NS_Comp_Mappage::CLMappage::setid_superviseur(System::String^ id_superviseur)
{
	this->id_superviseur = id_superviseur;
}
System::String^ NS_Comp_Mappage::CLMappage::getid_employe(void) { return this->id_employe; }
System::String^ NS_Comp_Mappage::CLMappage::getnom_employe(void) { return this->nom_employe; }
System::String^ NS_Comp_Mappage::CLMappage::getprenom_employe(void) { return this->prenom_employe; }
System::String^ NS_Comp_Mappage::CLMappage::getdate_naissance_employe(void) { return this->date_naissance_employe; }
System::String^ NS_Comp_Mappage::CLMappage::getid_superviseur(void) { return this->id_superviseur; }