#include "CLCommande.h"

void CLCommande::setReference_commande(System::String^ reference_commande) {
	this->reference_commande = reference_commande;
}

System::String^ CLCommande::getReference_commande() {
	return this->reference_commande;
}

void CLCommande::setTotal_HT(float total_HT) {
	this->total_HT = total_HT;
}

float CLCommande::getTotal_HT() {
	return this->total_HT;
}

void CLCommande::setTVA(int TVA) {
	this->TVA = TVA;
}

int CLCommande::getTVA() {
	return this->TVA;
}

void CLCommande::setDate_commande(System::String^ date_commande) {
	this->date_commande = date_commande;
}

System::String^ CLCommande::getDate_commande() {
	return this->date_commande;
}

void CLCommande::setDate_livraison(System::String^ date_livraison) {
	this->date_livraison = date_livraison;
}

System::String^ CLCommande::getDate_livraison() {
	return this->date_livraison;
}