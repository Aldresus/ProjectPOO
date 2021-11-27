#include "CLFacture.h"

void CLFacture::setID_facture(int id_facture) {
	this->id_facture = id_facture;
}

int CLFacture::getID_facture() {
	return this->id_facture;
}

void CLFacture::setDate_facturation(System::String^ date_facturation) {
	this->date_facturation = date_facturation;
}

System::String^ CLFacture::getDate_facturation() {
	return this->date_facturation;
}

void CLFacture::setLogo(System::String^ logo) {
	this->logo = logo;
}

System::String^ CLFacture::getLogo() {
	return this->logo;
}

void CLFacture::setNum_service(System::String^ num_service) {
	this->num_service = num_service;
}

System::String^ CLFacture::getNum_service() {
	return this->num_service;
}

void CLFacture::setNom_societe(System::String^ nom_societe) {
	this->nom_societe = nom_societe;
}

System::String^ CLFacture::getNom_societe() {
	return this->nom_societe;
}