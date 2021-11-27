#include "CLAdresse.h"

void CLAdresse::setID_adresse(int id_adresse) {
	this->id_adresse = id_adresse;
}

int CLAdresse::getID_adresse() {
	return this->id_adresse;
}

void CLAdresse::setNumero_voie(int numero_voie) {
	this->numero_voie = numero_voie;
}

int CLAdresse::getNumero_voie() {
	return this->numero_voie;
}

void CLAdresse::setNom_rue(System::String^ nom_rue) {
	this->nom_rue = nom_rue;
}

System::String^ CLAdresse::getNom_rue() {
	return this->nom_rue;
}

void CLAdresse::setNom_batiment(System::String^ nom_batiment) {
	this->nom_batiment = nom_batiment;
}

System::String^ CLAdresse::getNom_batiment() {
	return this->nom_batiment;
}

void CLAdresse::setNumero_etage(int numero_etage) {
	this->numero_etage = numero_etage;
}

int CLAdresse::getNumero_etage() {
	return this->numero_etage;
}

void CLAdresse::setCode_postal(System::String^ code_postal) {
	this->code_postal = code_postal;
}


System::String^ CLAdresse::getCode_postal() {
	return this->code_postal;
}


void CLAdresse::setVille(System::String^ ville) {
	this->ville = ville;
}

System::String^ CLAdresse::getVille() {
	return this->ville;
}

void CLAdresse::setAutres_infos(System::String^ autres_infos) {
	this->autres_infos = autres_infos;
}

System::String^ CLAdresse::getAutres_infos() {
	return this->autres_infos;
}