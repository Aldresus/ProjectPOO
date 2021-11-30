
#include "CLMappage.h"

System::String^ NS_Comp_Mappage::CLMappage::Select(void)
{
	return "SELECT [id_employe], [nom_employe], [prenom_employe] FROM Employe;";
}
System::String^ NS_Comp_Mappage::CLMappage::Insert(void)
{
	return "INSERT INTO Employe (nom_employe, prenom_employe) VALUES('" + this->Nom_employe + "','" + this->Prenom_employe + "');";
}
System::String^ NS_Comp_Mappage::CLMappage::Delete(void)
{
	return "";
}
System::String^ NS_Comp_Mappage::CLMappage::Update(void)
{
	return "";
}
void NS_Comp_Mappage::CLMappage::setId_employe(int Id_employe)
{
	this->Id_employe = Id_employe;
}
void NS_Comp_Mappage::CLMappage::setNom_employe(System::String^ Nom_employe)
{
	this->Nom_employe = Nom_employe;
}
void NS_Comp_Mappage::CLMappage::setPrenom_employe(System::String^ Prenom_employe)
{
	this->Prenom_employe = Prenom_employe;
}
int NS_Comp_Mappage::CLMappage::getId_employe(void) { return this->Id_employe; }
System::String^ NS_Comp_Mappage::CLMappage::getNom_employe(void) { return this->Nom_employe; }
System::String^ NS_Comp_Mappage::CLMappage::getPrenom_employe(void) { return this->Prenom_employe; }