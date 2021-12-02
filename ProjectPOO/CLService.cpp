#include "CLService.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLCad();
	this->oMappCommandes = gcnew NS_Comp_Mappage::CLMappageCommandes();
	this->oMappFactures = gcnew NS_Comp_Mappage::CLMappageFactures();
	this->oMappArticle = gcnew NS_Comp_Mappage::CLMappageArticle();
	this->oMappPaiement = gcnew NS_Comp_Mappage::CLMappagePaiement();
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutesLesCommandes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappCommandes->Select();
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

System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutesLesFactures(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappFactures->Select();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CLservices::ajouterUnFactures(System::String^ nom_societe, System::String^ num_service, System::String^ date_facturation, System::String^ adresse_facturation)
{
	System::String^ sql;


	this->oMappFactures->setnom_societe(nom_societe);
	this->oMappFactures->setdate_facturation(date_facturation);
	this->oMappFactures->setadresse_facturation(adresse_facturation);
	this->oMappFactures->setnum_service(num_service);
	sql = this->oMappFactures->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::supprimerUnFactures(System::String^ id_facture)
{
	System::String^ sql;

	this->oMappFactures->setid_facture(id_facture);
	sql = this->oMappFactures->Delete();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::updateUnFactures(System::String^ id_facture, System::String^ num_service, System::String^ nom_societe, System::String^ date_facturation, System::String^ adresse_facturation)
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


System::Data::DataSet ^ NS_Comp_Svc::CLservices::selectionnerToutesLesArticle(System::String ^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappArticle->Select();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CLservices::ajouterUnArticle(System::String^ nom_article, System::String^ prix_produit_HT, System::String^ couleur, System::String^ nature, System::String^ remise_commerciale, System::String^ marge_commerciale)
{
	System::String^ sql;


	this->oMappArticle->setnom_article(nom_article);
	this->oMappArticle->setcouleur(couleur);
	this->oMappArticle->setnature(nature);
	this->oMappArticle->setprix_produit_HT(prix_produit_HT);
	this->oMappArticle->setremise_commerciale(remise_commerciale);
	this->oMappArticle->setmarge_commerciale(marge_commerciale);

	sql = this->oMappArticle->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::supprimerUnArticle(System::String^ reference_article)
{
	System::String^ sql;

	this->oMappArticle->setreference_article(reference_article);
	sql = this->oMappArticle->Delete();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::updateUnArticle(System::String^ prix_produit_HT, System::String^ nom_article, System::String^ couleur, System::String^ nature, System::String^ remise_commerciale, System::String^ marge_commerciale, System::String^ reference_article)
{
System::String^ sql;


this->oMappArticle->setprix_produit_HT(prix_produit_HT);
this->oMappArticle->setnom_article(nom_article);
this->oMappArticle->setcouleur(couleur);
this->oMappArticle->setnature(nature);
this->oMappArticle->setremise_commerciale(remise_commerciale);
this->oMappArticle->setmarge_commerciale(marge_commerciale);
this->oMappArticle->setreference_article(reference_article);
sql = this->oMappArticle->Update();

this->oCad->actionRows(sql);
}



System::Data::DataSet ^ NS_Comp_Svc::CLservices::selectionnerToutLesPaiement(System::String ^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappPaiement->Select();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CLservices::ajouterUnPaiement(System::String^ date_paiement, System::String^ moyen_paiement, System::String^ id_facture_paiement)
{
	System::String^ sql;


	this->oMappPaiement->setdate_paiement(date_paiement);
	this->oMappPaiement->setmoyen_paiement(moyen_paiement);
	this->oMappPaiement->setid_facture_paiement(id_facture_paiement);

	sql = this->oMappPaiement->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::supprimerPaiement(System::String^ id_paiement)
{
	System::String^ sql;

	this->oMappPaiement->setid_paiement(id_paiement);
	sql = this->oMappPaiement->Delete();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::updateUnPaiement(System::String^ date_paiement, System::String^ moyen_paiement, System::String^ id_paiement)
{
	System::String^ sql;


	this->oMappPaiement->setdate_paiement(date_paiement);
	this->oMappPaiement->setmoyen_paiement(moyen_paiement);
	this->oMappPaiement->setid_paiement(id_paiement);

	sql = this->oMappPaiement->Update();

	this->oCad->actionRows(sql);
}