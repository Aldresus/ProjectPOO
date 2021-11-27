#include "CLComposer.h"

void CLComposer::setReference_article(int reference_article) {
	this->reference_article = reference_article;
}

int CLComposer::getReference_article() {
	return this->reference_article;
}

void CLComposer::setReference_commande(System::String^ reference_commande) {
	this->reference_commande = reference_commande;
}

System::String^ CLComposer::getReference_commande() {
	return this->reference_commande;
}

void CLComposer::setQuantite(int quantite) {
	this->quantite = quantite;
}

int CLComposer::getQuantite() {
	return this->quantite;
}