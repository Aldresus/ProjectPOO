#include "CLCouleurs.h"

void CLCouleurs::setID_couleur(int id_couleur) {
	this->id_couleur = id_couleur;
}


int CLCouleurs::getID_couleur() {
	return this->id_couleur;
}


void CLCouleurs::setCouleur(System::String^ couleur) {
	this->couleur = couleur;
}


System::String^ CLCouleurs::getCouleur() {
	return this->couleur;
}
