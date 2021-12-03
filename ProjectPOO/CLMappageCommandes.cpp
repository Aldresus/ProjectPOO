#include "CLMappageCommandes.h"

System::String^ NS_Comp_Mappage::CLMappageCommandes::Select(void)
{
	return "select  Commande.id_commande, Commande.reference_commande as 'reference commande', total_HT as 'total hors taxe', date_commande as 'date commande', date_livraison as 'date livraison', adresse_livraison as 'adresse livraison', Client.id_client as 'id client', nom_client as 'nom client', prenom_client as 'prenom client', ID_facture as 'Id facture', reference_article as 'reference article' from Client INNER JOIN Commande ON Commande.id_client = Client.id_client FULL OUTER JOIN Facture ON Facture.[id_commande] = Commande.[id_commande] full outer join Composer on composer.[id_commande] = Commande.[id_commande];";
}
System::String^ NS_Comp_Mappage::CLMappageCommandes::Insert(void)
{
	return "INSERT INTO Commande(reference_commande, total_HT, TVA, date_commande, date_livraison, adresse_livraison, id_client) SELECT LEFT([nom_client],2)+LEFT([prenom_client],2)+CAST(YEAR(getdate()) AS VARCHAR)+'" + this->adresse_livraison->Substring(0, 3) + "'+ CAST(ISNULL((SELECT MAX(id_commande+1) FROM Commande),1) AS varchar), " + this->total_HT + ", " + this->TVA + ",'" + this->date_commande + "', '" + this->date_livraison + "', '" + this->adresse_livraison + "', " + this->id_client + " FROM Client WHERE Client.id_client=" + this->id_client + ";";
}
System::String^ NS_Comp_Mappage::CLMappageCommandes::Delete(void)
{
	return "DELETE FROM Commande WHERE [id_commande]=" + this->id_commande + ";";
}
System::String^ NS_Comp_Mappage::CLMappageCommandes::Update(void)
{
	return "UPDATE Commande SET total_HT='" + this->total_HT + "', TVA='" + this->TVA + "', date_commande='" + this->date_commande + "', adresse_livraison='" + this->adresse_livraison + "' WHERE id_commande=" + this->id_commande + ";";
}


void NS_Comp_Mappage::CLMappageCommandes::setreference_commande(System::String^ reference_commande)
{
	this->reference_commande = reference_commande;
}
void NS_Comp_Mappage::CLMappageCommandes::settotal_HT(System::String^ total_HT)
{
	this->total_HT = total_HT;
}
void NS_Comp_Mappage::CLMappageCommandes::setTVA(System::String^ TVA)
{
	this->TVA = TVA;
}
void NS_Comp_Mappage::CLMappageCommandes::setdate_commande(System::String^ date_commande)
{
	this->date_commande = date_commande;
}
void NS_Comp_Mappage::CLMappageCommandes::setdate_livraison(System::String^ date_livraison)
{
	this->date_livraison = date_livraison;
}
void NS_Comp_Mappage::CLMappageCommandes::setadresse_livraison(System::String^ adresse_livraison)
{
	this->adresse_livraison = adresse_livraison;
}
void NS_Comp_Mappage::CLMappageCommandes::setid_client(System::String^ id_client)
{
	this->id_client = id_client;
}
void NS_Comp_Mappage::CLMappageCommandes::setid_commande(System::String^ id_commande)
{
	this->id_commande = id_commande;
}


System::String^ NS_Comp_Mappage::CLMappageCommandes::getreference_commande(void) { return this->reference_commande; }
System::String^ NS_Comp_Mappage::CLMappageCommandes::gettotal_HT(void) { return this->total_HT; }
System::String^ NS_Comp_Mappage::CLMappageCommandes::getTVA(void) { return this->TVA; }
System::String^ NS_Comp_Mappage::CLMappageCommandes::getdate_commande(void) { return this->date_commande; }
System::String^ NS_Comp_Mappage::CLMappageCommandes::getdate_livraison(void) { return this->date_livraison; }
System::String^ NS_Comp_Mappage::CLMappageCommandes::getadresse_livraison(void) { return this->adresse_livraison; }
System::String^ NS_Comp_Mappage::CLMappageCommandes::getid_client(void) { return this->id_client; }
System::String^ NS_Comp_Mappage::CLMappageCommandes::getid_commande(void) { return this->id_commande; }