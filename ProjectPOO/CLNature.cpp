#include "CLNature.h"

void CLNature::setID_nature(int id_nature) {
	this->id_nature = id_nature;
}

int CLNature::getID_nature() {
	return this->id_nature;
}

void CLNature::setNature(System::String^ nature) {
	this->nature = nature;
}

System::String^ CLNature::getNature() {
	return this->nature;
}