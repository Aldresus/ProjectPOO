
#include "CLService.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLCad();
	this->oMappEmploye = gcnew NS_Comp_Mappage::CLMappageEmploye();
	this->oMappSuperviseurs = gcnew NS_Comp_Mappage::CLMappageSuperviseurs();
	this->oMappageStocks = gcnew NS_Comp_Mappage::CLMappageStocks;
	this->oMappClient = gcnew NS_Comp_Mappage::CLMappageClient();
	this->oMappStats = gcnew NS_Comp_Mappage::CLMappageStats();
	this->oMappCommandes = gcnew NS_Comp_Mappage::CLMappageCommandes();
	this->oMappFactures = gcnew NS_Comp_Mappage::CLMappageFactures();
	this->oMappArticle = gcnew NS_Comp_Mappage::CLMappageArticle();
	this->oMappPaiement = gcnew NS_Comp_Mappage::CLMappagePaiement();

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

System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutLesArticles(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappageStocks->Select();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CLservices::ajouterUnArticle(System::String^ nom_article, System::String^ prix_produit_HT, System::String^ couleur, System::String^ nature, System::String^ quantite_stock, System::String^ seuil_reapro, System::String^ remise_commerciale, System::String^ marge_commerciale, System::String^ demarque_inconnue)
{
	System::String^ sql;

	this->oMappageStocks->setnom_article(nom_article);
	this->oMappageStocks->setprix_produit_HT(prix_produit_HT);
	this->oMappageStocks->setcouleur(couleur);
	this->oMappageStocks->setnature(nature);
	this->oMappageStocks->setquantite_stock(quantite_stock);
	this->oMappageStocks->setseuil_reapro(seuil_reapro);
	this->oMappageStocks->setremise_commerciale(remise_commerciale);
	this->oMappageStocks->setmarge_commerciale(marge_commerciale);
	this->oMappageStocks->setdemarque_inconnue(demarque_inconnue);
	sql = this->oMappageStocks->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::supprimerUnArticle(System::String^ reference_article)
{
	System::String^ sql;

	this->oMappageStocks->setreference_article(reference_article);
	sql = this->oMappageStocks->Delete();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::updateUnArticle(System::String^ reference_article, System::String^ nom_article, System::String^ prix_produit_HT, System::String^ couleur, System::String^ nature, System::String^ quantite_stock, System::String^ seuil_reapro, System::String^ remise_commerciale, System::String^ marge_commerciale, System::String^ demarque_inconnue)
{
	System::String^ sql;

	this->oMappageStocks->setreference_article(reference_article);
	this->oMappageStocks->setnom_article(nom_article);
	this->oMappageStocks->setprix_produit_HT(prix_produit_HT);
	this->oMappageStocks->setcouleur(couleur);
	this->oMappageStocks->setnature(nature);
	this->oMappageStocks->setquantite_stock(quantite_stock);
	this->oMappageStocks->setseuil_reapro(seuil_reapro);
	this->oMappageStocks->setremise_commerciale(remise_commerciale);
	this->oMappageStocks->setmarge_commerciale(marge_commerciale);
	this->oMappageStocks->setdemarque_inconnue(demarque_inconnue);
	sql = this->oMappageStocks->Update();

	this->oCad->actionRows(sql);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutesLesClient(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappClient->Select();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CLservices::ajouterUnePersonne(System::String^ nom_client, System::String^ prenom_client, System::String^ date_naissance_client, System::String^ date_inscription, System::String^ adresse_client)
{
	System::String^ sql;

	this->oMappClient->setnom_client(nom_client);
	this->oMappClient->setprenom_client(prenom_client);
	this->oMappClient->setdate_naissance_client(date_naissance_client);
	this->oMappClient->setdate_inscription(date_inscription);
	this->oMappClient->setadresse_client(adresse_client);
	sql = this->oMappClient->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::updateUnePersonne(System::String^ id_client, System::String^ nom_client, System::String^ prenom_client, System::String^ date_naissance_client, System::String^ date_inscription, System::String^ adresse_client)
{
	System::String^ sql;

	this->oMappClient->setid_client(id_client);
	this->oMappClient->setnom_client(nom_client);
	this->oMappClient->setprenom_client(prenom_client);
	this->oMappClient->setdate_naissance_client(date_naissance_client);
	this->oMappClient->setdate_inscription(date_inscription);
	this->oMappClient->setadresse_client(adresse_client);
	sql = this->oMappClient->Update();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::supprimerUnePersonne(System::String^ id_client)
{
	System::String^ sql;

	this->oMappClient->setid_client(id_client);
	sql = this->oMappClient->Delete();

	this->oCad->actionRows(sql);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::produitSousSeuilReapro(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappStats->produitSousSeuilReapro();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::panierMoyenApresRemise(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappStats->panierMoyenApresRemise();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::CASurUnMois(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappStats->CASurUnMois();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::montantTotalDAchatPourChaqueClient(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappStats->montantTotalDAchatPourChaqueClient();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::valeurAchatStock(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappStats->valeurAchatStock();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::valeurCommercialeStock(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappStats->valeurCommercialeStock();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::dixArticleLesPlusVendus(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappStats->dixArticleLesPlusVendus();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::dixArticleLesMoinsVendus(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappStats->dixArticleLesMoinsVendus();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CLservices::ajouterUnCommandes(System::String^ TVA, System::String^ total_HT, System::String^ date_commande, System::String^ adresse_livraison, System::String^ date_livraison, System::String^ id_client)
{
	System::String^ sql;

	this->oMappCommandes->settotal_HT(total_HT);
	this->oMappCommandes->setTVA(TVA);
	this->oMappCommandes->setadresse_livraison(adresse_livraison);
	this->oMappCommandes->setdate_commande(date_commande);
	this->oMappCommandes->setdate_livraison(date_livraison);
	this->oMappCommandes->setid_client(id_client);
	sql = this->oMappCommandes->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::updateUnCommandes(System::String^ id_commande, System::String^ total_HT, System::String^ TVA, System::String^ date_commande, System::String^ adresse_livraison, System::String^ date_livraison)
{
	System::String^ sql;

	this->oMappCommandes->setid_commande(id_commande);
	this->oMappCommandes->settotal_HT(total_HT);
	this->oMappCommandes->setTVA(TVA);
	this->oMappCommandes->setdate_commande(date_commande);
	this->oMappCommandes->setadresse_livraison(adresse_livraison);
	this->oMappCommandes->setdate_livraison(date_livraison);
	sql = this->oMappCommandes->Update();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::supprimerUnCommandes(System::String^ id_commande)
{
	System::String^ sql;

	this->oMappCommandes->setid_commande(id_commande);
	sql = this->oMappCommandes->Delete();

	this->oCad->actionRows(sql);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutesLesFactures(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappFactures->Select();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CLservices::ajouterUnFactures(System::String^ nom_societe, System::String^ num_service, System::String^ date_facturation, System::String^ adresse_facturation, System::String^ logo, System::String^ id_commande)
{
	System::String^ sql;


	this->oMappFactures->setnom_societe(nom_societe);
	this->oMappFactures->setdate_facturation(date_facturation);
	this->oMappFactures->setadresse_facturation(adresse_facturation);
	this->oMappFactures->setnum_service(num_service);
	this->oMappFactures->setlogo(logo);
	this->oMappFactures->setid_commande(id_commande);
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

void NS_Comp_Svc::CLservices::updateUnFactures(System::String^ id_facture, System::String^ num_service, System::String^ nom_societe, System::String^ date_facturation, System::String^ adresse_facturation, System::String^ logo)
{
	System::String^ sql;

	this->oMappFactures->setid_facture(id_facture);
	this->oMappFactures->setnum_service(num_service);
	this->oMappFactures->setnom_societe(nom_societe);
	this->oMappFactures->setdate_facturation(date_facturation);
	this->oMappFactures->setadresse_facturation(adresse_facturation);
	this->oMappFactures->setlogo(logo);
	sql = this->oMappFactures->Update();

	this->oCad->actionRows(sql);
}


System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutesLesArticleCommande(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappArticle->Select();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CLservices::ajouterUnArticleCommande(System::String^ nom_article, System::String^ prix_produit_HT, System::String^ couleur, System::String^ nature, System::String^ remise_commerciale, System::String^ marge_commerciale)
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

void NS_Comp_Svc::CLservices::supprimerUnArticleCommande(System::String^ reference_article)
{
	System::String^ sql;

	this->oMappArticle->setreference_article(reference_article);
	sql = this->oMappArticle->Delete();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::updateUnArticleCommande(System::String^ prix_produit_HT, System::String^ nom_article, System::String^ couleur, System::String^ nature, System::String^ remise_commerciale, System::String^ marge_commerciale, System::String^ reference_article)
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



System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutLesPaiement(System::String^ dataTableName)
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

System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutesLesCommandes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappCommandes->Select();
	return this->oCad->getRows(sql, dataTableName);
}