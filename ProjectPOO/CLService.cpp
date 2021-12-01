#include "CLService.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLCad();
	this->oMappCommandes = gcnew NS_Comp_Mappage::CLMappageCommandes();
	//this->oMappSuperviseurs = gcnew NS_Comp_Mappage::CLMappageSuperviseurs();
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutesLesCommandes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappCommandes->Select();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutesLesSuperviseurs(System::String^ dataTableName)
{
	System::String^ sql;

	//sql = this->oMappSuperviseurs->Select();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CLservices::ajouterUnCommandes(System::String^ TVA, System::String^ total_HT, System::String^ date_commande, System::String^ adresse_livraison, System::String^ date_livraison)
{
	System::String^ sql;

	this->oMappCommandes->settotal_HT(total_HT);
	this->oMappCommandes->setTVA(TVA);
	this->oMappCommandes->setadresse_livraison(adresse_livraison);
	this->oMappCommandes->setdate_commande(date_commande);
	this->oMappCommandes->setdate_livraison(date_livraison);
	sql = this->oMappCommandes->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::updateUnCommandes(System::String^ reference_commande, System::String^ total_HT, System::String^ TVA, System::String^ date_commande, System::String^ adresse_livraison, System::String^ date_livraison)
{
	System::String^ sql;

	this->oMappCommandes->setreference_commande(reference_commande);
	this->oMappCommandes->settotal_HT(total_HT);
	this->oMappCommandes->setTVA(TVA);
	this->oMappCommandes->setdate_commande(date_commande);
	this->oMappCommandes->setadresse_livraison(adresse_livraison);
	this->oMappCommandes->setdate_livraison(date_livraison);
	sql = this->oMappCommandes->Update();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::supprimerUnCommandes(System::String^ reference_commande)
{
	System::String^ sql;

	this->oMappCommandes->setreference_commande(reference_commande);
	sql = this->oMappCommandes->Delete();

	this->oCad->actionRows(sql);
}

/*void NS_Comp_Svc::CLservices::ajouterUnSuperviseur(System::String^ prenom_superviseur, System::String^ nom_superviseur, System::String^ date_naissance_superviseur, System::String^ adresse_superviseur)
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
}*/