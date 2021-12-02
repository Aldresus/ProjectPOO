#include "CLMappageArticle.h"

System::String^ NS_Comp_Mappage::CLMappageArticle::Select(void)
{
	return "select * from Article";
}

System::String^ NS_Comp_Mappage::CLMappageArticle::Insert(void)
{
	return "insert into Article(nom_article, prix_produit_HT, couleur, nature, remise_commerciale, marge_commerciale) values('" + this->nom_article + "','" + this->prix_produit_HT + "','" + this->couleur + "','" + this->nature + "','" + this->remise_commerciale + "','" + this->marge_commerciale + "')";
}


System::String^ NS_Comp_Mappage::CLMappageArticle::Delete(void)
{
	return "DELETE FROM Article where reference_article = '" + this->reference_article + "';";
}
System::String^ NS_Comp_Mappage::CLMappageArticle::Update(void)
{
	return "update Article SET nom_article ='" + nom_article + "', prix_produit_HT = '" + this->prix_produit_HT + "', couleur = '" + this->couleur + "', nature = '" + this->nature + "', remise_commerciale = '" + this->remise_commerciale + "', marge_commerciale = '" + this->marge_commerciale + ";'";
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