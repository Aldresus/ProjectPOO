
#include "CLService.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLCad();
	this->oMappEmploye = gcnew NS_Comp_Mappage::CLMappageEmploye();
	this->oMappSuperviseurs = gcnew NS_Comp_Mappage::CLMappageSuperviseurs();
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutesLesEmploye(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappEmploye->Select();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutesLesSuperviseurs(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappSuperviseurs->Select();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CLservices::ajouterUnEmploye(System::String^ prenom_employe, System::String^ nom_employe, System::String^ date_naissance_employe, System::String^ adresse_employe, System::String^ id_superviseur_employe)
{
	System::String^ sql;

	this->oMappEmploye->setnom_employe(nom_employe);
	this->oMappEmploye->setprenom_employe(prenom_employe);
	this->oMappEmploye->setadresse_employe(adresse_employe);
	this->oMappEmploye->setdate_naissance_employe(date_naissance_employe);
	this->oMappEmploye->setid_superviseur_employe(id_superviseur_employe);
	sql = this->oMappEmploye->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::updateUnEmploye(System::String^ id_employe, System::String^ nom_employe, System::String^ prenom_employe, System::String^ date_naissance_employe, System::String^ adresse_employe, System::String^ id_superviseur_employe)
{
	System::String^ sql;

	this->oMappEmploye->setid_employe(id_employe);
	this->oMappEmploye->setnom_employe(nom_employe);
	this->oMappEmploye->setprenom_employe(prenom_employe);
	this->oMappEmploye->setdate_naissance_employe(date_naissance_employe);
	this->oMappEmploye->setadresse_employe(adresse_employe);
	this->oMappEmploye->setid_superviseur_employe(id_superviseur_employe);
	sql = this->oMappEmploye->Update();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::supprimerUnEmploye(System::String^ id_employe)
{
	System::String^ sql;

	this->oMappEmploye->setid_employe(id_employe);
	sql = this->oMappEmploye->Delete();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::ajouterUnSuperviseur(System::String^ prenom_superviseur, System::String^ nom_superviseur, System::String^ date_naissance_superviseur, System::String^ adresse_superviseur)
{
	System::String^ sql;


	this->oMappSuperviseurs->setprenom_superviseur(prenom_superviseur);
	this->oMappSuperviseurs->setdate_naissance_superviseur(date_naissance_superviseur);
	this->oMappSuperviseurs->setadresse_superviseur(adresse_superviseur);
	this->oMappSuperviseurs->setnom_superviseur(nom_superviseur);
	sql = this->oMappSuperviseurs->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::supprimerUnSuperviseur(System::String^ id_superviseur)
{
	System::String^ sql;

	this->oMappSuperviseurs->setid_superviseur(id_superviseur);
	sql = this->oMappSuperviseurs->Delete();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::updateUnSuperviseur(System::String^ id_superviseur, System::String^ nom_superviseur, System::String^ prenom_superviseur, System::String^ date_naissance_superviseur, System::String^ adresse_superviseur)
{
	System::String^ sql;

	this->oMappSuperviseurs->setid_superviseur(id_superviseur);
	this->oMappSuperviseurs->setnom_superviseur(nom_superviseur);
	this->oMappSuperviseurs->setprenom_superviseur(prenom_superviseur);
	this->oMappSuperviseurs->setdate_naissance_superviseur(date_naissance_superviseur);
	this->oMappSuperviseurs->setadresse_superviseur(adresse_superviseur);
	sql = this->oMappSuperviseurs->Update();

	this->oCad->actionRows(sql);
}