#include "CLEmploye.h"

void CLEmploye::setID_employe(int id_employe) {
	this->id_employe = id_employe;
}

int CLEmploye::getID_employe(void) {
	return this->id_employe;
}

void CLEmploye::setNom_employe(System::String^ nom_employe) {
	this->nom_employe = nom_employe;
}

System::String^ CLEmploye::getNom_employe(void) {
	return this->nom_employe;
}

void CLEmploye::setPrenom_employe(System::String^ prenom_eploye) {
	this->prenom_eploye = prenom_eploye;
}

System::String^ CLEmploye::getPrenom_employe(void) {
	return this->prenom_eploye;
}

void CLEmploye::setDate_naissance_employe(System::String^ date_naissance_employe) {
	this->date_naissance_employe = date_naissance_employe;
}

System::String^ CLEmploye::getDate_naissance_employe(void) {
	return this->date_naissance_employe;
}