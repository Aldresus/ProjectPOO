
#include "CLService.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLCad();
	this->oMappTB = gcnew NS_Comp_Mappage::CLMappage();
}
System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutesLesPersonnes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->Select();
	return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_Svc::CLservices::ajouterUnePersonne(System::String^ nom_employe, System::String^ prenom_employe, System::String^ id_employe, System::String^ date_naissance_employe)
{
	System::String^ sql;

	this->oMappTB->setid_employe(id_employe);
	this->oMappTB->setnom_employe(nom_employe);
	this->oMappTB->setprenom_employe(prenom_employe);
	this->oMappTB->setdate_naissance_employe(date_naissance_employe);
	sql = this->oMappTB->Insert();

	this->oCad->actionRows(sql);
}
