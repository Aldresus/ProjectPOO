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

System::Data::DataSet^ NS_Comp_Svc::CLservices::CASurUnMois(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappStats->CASurUnMois();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::montantTotalDAchatPourChaqueClient(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappStats->montantTotalDAchatPourChaqueClient();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::valeurAchatStock(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappStats->valeurAchatStock();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::valeurCommercialeStock(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappStats->valeurCommercialeStock();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::dixArticleLesPlusVendus(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappStats->dixArticleLesPlusVendus();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::dixArticleLesMoinsVendus(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappStats->dixArticleLesMoinsVendus();
	return this->oCad->getRows(sql, dataTableName);
}