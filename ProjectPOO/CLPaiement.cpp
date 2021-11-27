#include "CLPaiement.h"

void CLPaiement::setID_paiement(int id_paiement) {
	this->id_paiement = id_paiement;
}

int CLPaiement::getID_paiement() {
	return this->id_paiement;
}

void CLPaiement::setNumero_paiement(int numero_paiement) {
	this->numero_paiement = numero_paiement;
}

int CLPaiement::getNumero_paiement() {
	return this->id_paiement;
}

void CLPaiement::setDate_paiement(System::String^ date_paiement) {
	this->date_paiement = date_paiement;
}

System::String^ CLPaiement::getDate_paiement() {
	return this->date_paiement;
}

void CLPaiement::setMoyen_paiement(System::String^ moyen_paiement) {
	this->moyen_paiement = moyen_paiement;
}

System::String^ CLPaiement::getMoyen_paiement() {
	return this->moyen_paiement;
}

void CLPaiement::setID_facture(int id_facture) {
	this->id_facture = id_facture;
}

int CLPaiement::getID_facture() {
	return this->id_facture;
}
