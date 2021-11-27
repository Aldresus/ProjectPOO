#include "CLArticle.h"

void CLArticle::setReference_article(int reference_article) {
	this->reference_article = reference_article;
}

int CLArticle::getReference_article() {
	return this->reference_article;
}

void CLArticle::setNom_article(System::String^ nom_article) {
	this->nom_article = nom_article;
}

System::String^ CLArticle::getNom_article() {
	return this->nom_article;
}

void CLArticle::setPrix_produit_HT(float prix_produit_HT) {
	this->prix_produit_HT = prix_produit_HT;
}

float CLArticle::getPrix_produit_HT() {
	return this->prix_produit_HT;
}

void CLArticle::setCouleur(System::String^ couleur) {
	this->couleur = couleur;
}

System::String^ CLArticle::getCouleur() {
	return this->couleur;
}

void CLArticle::setNature(System::String^ nature) {
	this->nature = nature;
}

System::String^ CLArticle::getNature() {
	return this->nature;
}