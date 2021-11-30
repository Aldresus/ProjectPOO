
#include "CLMappage.h"

System::String^ NS_Comp_Mappage::CLMappage::Select(void)
{
	return "SELECT [id_employe], [nom_employe], [prenom_employe] FROM Employe;";
}
System::String^ NS_Comp_Mappage::CLMappage::Insert(void)
{
	return "INSERT INTO Employe (nom_employe, prenom_employe) VALUES('" + this->nom_employe + "','" + this->prenom_employe + "');";
}
System::String^ NS_Comp_Mappage::CLMappage::Delete(void)
{
	return "";
}
System::String^ NS_Comp_Mappage::CLMappage::Update(void)
{
	return "";
}
void NS_Comp_Mappage::CLMappage::setid_employe(int id_employe)
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
int NS_Comp_Mappage::CLMappage::getid_employe(void) { return this->id_employe; }
System::String^ NS_Comp_Mappage::CLMappage::getnom_employe(void) { return this->nom_employe; }
System::String^ NS_Comp_Mappage::CLMappage::getprenom_employe(void) { return this->prenom_employe; }