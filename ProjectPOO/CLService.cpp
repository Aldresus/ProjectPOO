#include "CLService.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
    this->oCad = gcnew NS_Comp_Data::CLCad();
    this->oMappClient = gcnew NS_Comp_Mappage::CLMappageClient();
}
System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutesLesClient(System::String^ dataTableName)
{
    System::String^ sql;

    sql = this->oMappClient->Select();
    return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CLservices::ajouterUnePersonne(System::String^ nom_client, System::String^ prenom_client, System::String^ date_naissance_client, System::String^ date_inscription, System::String^ adresse_client)
{
    System::String^ sql;

    this->oMappClient->setnom_client(nom_client);
    this->oMappClient->setprenom_client(prenom_client);
    this->oMappClient->setdate_naissance_client(date_naissance_client);
    this->oMappClient->setdate_inscription(date_inscription);
    this->oMappClient->setadresse_client(adresse_client);
    sql = this->oMappClient->Insert();

    this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::updateUnePersonne(System::String^ id_client, System::String^ nom_client, System::String^ prenom_client, System::String^ date_naissance_client, System::String^ date_inscription, System::String^ adresse_client)
{
    System::String^ sql;

    this->oMappClient->setid_client(id_client);
    this->oMappClient->setnom_client(nom_client);
    this->oMappClient->setprenom_client(prenom_client);
    this->oMappClient->setdate_naissance_client(date_naissance_client);
    this->oMappClient->setdate_inscription(date_inscription);
    this->oMappClient->setadresse_client(adresse_client);
    sql = this->oMappClient->Update();

    this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::supprimerUnePersonne(System::String^ id_client)
{
    System::String^ sql;

    this->oMappClient->setid_client(id_client);
    sql = this->oMappClient->Delete();

    this->oCad->actionRows(sql);
}