#include "CLService.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLCad();
	this->oMappStats = gcnew NS_Comp_Mappage::CLMappageStats();
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::produitSousSeuilReapro(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappStats->produitSousSeuilReapro();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::panierMoyenApresRemise(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappStats->panierMoyenApresRemise();
	return this->oCad->getRows(sql, dataTableName);
}