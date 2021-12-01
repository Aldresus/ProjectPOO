#include "CLService.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLCad();
	this->oMappCommandes = gcnew NS_Comp_Mappage::CLMappageCommandes();
	this->oMappFactures = gcnew NS_Comp_Mappage::CLMappageFactures();
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutesLesCommandes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappCommandes->Select();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutesLesFactures(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappFactures->Select();
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

void NS_Comp_Svc::CLservices::ajouterUnFacture(System::String^ nom_societe, System::String^ num_service, System::String^ date_facturation, System::String^ adresse_facturation)
{
	System::String^ sql;


	this->oMappFactures->setnom_societe(nom_societe);
	this->oMappFactures->setdate_facturation(date_facturation);
	this->oMappFactures->setadresse_facturation(adresse_facturation);
	this->oMappFactures->setnum_service(num_service);
	sql = this->oMappFactures->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::supprimerUnFacture(System::String^ id_facture)
{
	System::String^ sql;

	this->oMappFactures->setid_facture(id_facture);
	sql = this->oMappFactures->Delete();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::updateUnFacture(System::String^ id_facture, System::String^ num_service, System::String^ nom_societe, System::String^ date_facturation, System::String^ adresse_facturation)
{
	System::String^ sql;

	this->oMappFactures->setid_facture(id_facture);
	this->oMappFactures->setnum_service(num_service);
	this->oMappFactures->setnom_societe(nom_societe);
	this->oMappFactures->setdate_facturation(date_facturation);
	this->oMappFactures->setadresse_facturation(adresse_facturation);
	sql = this->oMappFactures->Update();

	this->oCad->actionRows(sql);
}