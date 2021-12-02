#include "CLMappageArticle.h"

System::String^ NS_Comp_Mappage::CLMappageArticle::Select(void)
{
	return "SELECT Article.reference_article, Article.nom_article, Article.prix_produit_HT, Article.couleur, Article.nature, Article.marge_commerciale, Article.remise_commerciale FROM Article ";
}

System::String^ NS_Comp_Mappage::CLMappageArticle::Insert(void)
{
	return "INSERT INTO Article(nom_article, prix_produit_HT, couleur, nature, remise_commerciale, marge_commerciale) VALUES ('" + this->nom_article + "', " + this->prix_produit_HT + ", '" + this->couleur + "', '" + this->nature + "', " + this->remise_commerciale + ", " + this->marge_commerciale + "); INSERT INTO Article(reference_article,quantite_stock, seuil_reapro) VALUES (SCOPE_IDENTITY());";
}

System::String^ NS_Comp_Mappage::CLMappageArticle::Delete(void)
{
	return "DELETE FROM Article WHERE reference_article=" + this->reference_article + ";DELETE FROM Article WHERE reference_article=" + this->reference_article + ";";
}
System::String^ NS_Comp_Mappage::CLMappageArticle::Update(void)
{
	return "UPDATE Article SET nom_article='" + this->nom_article + "', [prix_produit_HT]=" + this->prix_produit_HT + ", [couleur]='" + this->couleur + "', [remise_commerciale]=" + this->remise_commerciale + ", [marge_commerciale]=" + this->marge_commerciale + " WHERE reference_article=" + this->reference_article + ";";
}
void NS_Comp_Mappage::CLMappageArticle::setreference_article(System::String^ reference_article)
{
	this->reference_article = reference_article;
}
void NS_Comp_Mappage::CLMappageArticle::setprix_produit_HT(System::String^ prix_produit_HT)
{
	this->prix_produit_HT = prix_produit_HT;
}
void NS_Comp_Mappage::CLMappageArticle::setcouleur(System::String^ couleur)
{
	this->couleur = couleur;
}
void NS_Comp_Mappage::CLMappageArticle::setnature(System::String^ nature)
{
	this->nature = nature;
}

void NS_Comp_Mappage::CLMappageArticle::setnom_article(System::String^ nom_article)
{
	this->nom_article = nom_article;
}
void NS_Comp_Mappage::CLMappageArticle::setremise_commerciale(System::String^ remise_commerciale)
{
	this->remise_commerciale = remise_commerciale;
}
void NS_Comp_Mappage::CLMappageArticle::setmarge_commerciale(System::String^ marge_commerciale)
{
	this->marge_commerciale = marge_commerciale;
}

System::String^ NS_Comp_Mappage::CLMappageArticle::getreference_article(void) { return this->reference_article; }
System::String^ NS_Comp_Mappage::CLMappageArticle::getprix_produit_HT(void) { return this->prix_produit_HT; }
System::String^ NS_Comp_Mappage::CLMappageArticle::getcouleur(void) { return this->couleur; }
System::String^ NS_Comp_Mappage::CLMappageArticle::getnature(void) { return this->nature; }
System::String^ NS_Comp_Mappage::CLMappageArticle::getnom_article(void) { return this->nom_article; }
System::String^ NS_Comp_Mappage::CLMappageArticle::getremise_commerciale(void) { return this->remise_commerciale; }
System::String^ NS_Comp_Mappage::CLMappageArticle::getmarge_commerciale(void) { return this->marge_commerciale; }