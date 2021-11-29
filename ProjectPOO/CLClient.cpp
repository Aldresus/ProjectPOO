#include "CLClient.h"

void CLClient::setID_client(int id_client) {
    this->id_client = id_client;
}

int CLClient::getID_client() {
    return this->id_client;
}

void CLClient::setNom_client(System::String^ nom_client) {
    this->nom_client = nom_client;
}

System::String^ CLClient::getNom_client() {
    return this->nom_client;
}

void CLClient::setDate_de_naissance(System::String^ date_de_naissance) {
    this->date_de_naissance = date_de_naissance;
}

System::String^ CLClient::getDate_de_naissance() {
    return this->date_de_naissance;
}

void CLClient::setDate_inscription(System::String^ date_inscription) {
    this->date_inscription = date_inscription;
}

System::String^ CLClient::getDate_inscription() {
    return this->date_inscription;
}

System::String^ CLClient::Select(void) {
    return "SELECT id_client, nom_client, prenom_client,  date_naissance_client, date_inscription FROM Client";
}

System::String^ CLClient::Insert(void) {
    return "INSERT INTO Client(nom_client, prenom_client, date_naissance_client, date_inscription) VALUES('" + this->nom_client + "','" + this->prenom_client + "','" + this->date_de_naissance + "','" + this->date_inscription + "');";
}

System::String^ CLClient::Delete(void) {
    return "DELETE FROM Client WHERE (nom_client='" + this->nom_client + "'AND prenom_client='" + this->prenom_client + "' AND id_client=" + this->id_client + ");";
}

System::String^ CLClient::Update(void) {
    return "UPDATE Client SET nom_client='" + this->nom_client + "', prenom_client='" + this->prenom_client + "', date_naissance_client='" + this->date_de_naissance + "', date_inscription='" + this->date_inscription + "' WHERE id_client=" + id_client + ";";
}