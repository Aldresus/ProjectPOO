
#include "CLService.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLCad();
	this->oMappEmploye = gcnew NS_Comp_Mappage::CLMappageEmploye();
}
System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutesLesEmploye(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappEmploye->Select();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutesLesSuperviseurs(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappSuperviseurs->Select();
	return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_Svc::CLservices::ajouterUnePersonne(System::String^ nom_employe, System::String^ prenom_employe, System::String^ id_employe, System::String^ date_naissance_employe)
{
	System::String^ sql;

	this->oMappEmploye->setid_employe(id_employe);
	this->oMappEmploye->setnom_employe(nom_employe);
	this->oMappEmploye->setprenom_employe(prenom_employe);
	this->oMappEmploye->setdate_naissance_employe(date_naissance_employe);
	sql = this->oMappEmploye->Insert();

	this->oCad->actionRows(sql);
}
