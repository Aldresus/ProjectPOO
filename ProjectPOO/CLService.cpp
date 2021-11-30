#include "CLService.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLCad();
	this->oMappageStocks = gcnew NS_Comp_Mappage::CLMappageStocks;


}

System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutesLesArticles(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappageStocks->Select();
	return this->oCad->getRows(sql, dataTableName);
}