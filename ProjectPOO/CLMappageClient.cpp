#include "CLMappageClient.h"

System::String^ NS_Comp_Mappage::CLMappageClient::Select(void)
{
    return "SELECT [id_client], [nom_client], [prenom_client], [date_naissance_client], [date_inscription], [adresse_client] FROM Client ";
}
System::String^ NS_Comp_Mappage::CLMappageClient::Insert(void)
{
    return "INSERT INTO Client (nom_client, prenom_client, date_naissance_client, date_inscription, adresse_client) VALUES('" + this->nom_client + "', '" + this->prenom_client + "', CAST(' " + this->date_naissance_client + "'AS date), CAST(' " + this->date_inscription + "'AS date),'" + this->adresse_client + "'); ";
}
System::String^ NS_Comp_Mappage::CLMappageClient::Delete(void)
{
    return "DELETE FROM Client WHERE (id_client=" + this->id_client + ");";
}
System::String^ NS_Comp_Mappage::CLMappageClient::Update(void)
{
    return "UPDATE Client SET nom_client='" + this->nom_client + "', prenom_client='" + this->prenom_client + "', date_naissance_client='" + this->date_naissance_client + "', date_inscription='" + this->date_inscription + "' WHERE id_client=" + this->id_client + ";";
}
void NS_Comp_Mappage::CLMappageClient::setid_client(System::String^ id_client)
{
    this->id_client = id_client;
}
void NS_Comp_Mappage::CLMappageClient::setnom_client(System::String^ nom_client)
{
    this->nom_client = nom_client;
}
void NS_Comp_Mappage::CLMappageClient::setprenom_client(System::String^ prenom_client)
{
    this->prenom_client = prenom_client;
}
void NS_Comp_Mappage::CLMappageClient::setdate_naissance_client(System::String^ date_naissance_client)
{
    this->date_naissance_client = date_naissance_client;
}
void NS_Comp_Mappage::CLMappageClient::setdate_inscription(System::String^ date_inscription)
{
    this->date_inscription = date_inscription;
}
void NS_Comp_Mappage::CLMappageClient::setadresse_client(System::String^ adresse_client)
{
    this->adresse_client = adresse_client;
}
System::String^ NS_Comp_Mappage::CLMappageClient::getid_client(void) { return this->id_client; }
System::String^ NS_Comp_Mappage::CLMappageClient::getnom_client(void) { return this->nom_client; }
System::String^ NS_Comp_Mappage::CLMappageClient::getprenom_client(void) { return this->prenom_client; }
System::String^ NS_Comp_Mappage::CLMappageClient::getdate_naissance_client(void) { return this->date_naissance_client; }
System::String^ NS_Comp_Mappage::CLMappageClient::getdate_inscription(void) { return this->date_inscription; }
System::String^ NS_Comp_Mappage::CLMappageClient::getadresse_client(void) { return this->adresse_client; }