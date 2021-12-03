#pragma once
#include "CLMappageCommandes.h"
#include "CLCad.h"
#include "CLMappageArticle.h"
#include "CLMappageFactures.h"
#include "CLMappagePaiement.h"


namespace NS_Comp_Svc
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLCad^ oCad;
		NS_Comp_Mappage::CLMappageCommandes^ oMappCommandes;
		NS_Comp_Mappage::CLMappageFactures^ oMappFactures;
		NS_Comp_Mappage::CLMappageArticle^ oMappArticle;
		NS_Comp_Mappage::CLMappagePaiement^ oMappPaiement;


	public:
		CLservices(void);
		System::Data::DataSet^ selectionnerToutesLesCommandes(System::String^);
		void ajouterUnCommandes(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void supprimerUnCommandes(System::String^);
		void updateUnCommandes(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);

		System::Data::DataSet^ selectionnerToutesLesFactures(System::String^);
		void ajouterUnFactures(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void supprimerUnFactures(System::String^);
		void updateUnFactures(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);

		System::Data::DataSet^ selectionnerToutesLesArticle(System::String^);
		void ajouterUnArticle(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void supprimerUnArticle(System::String^);
		void updateUnArticle( System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);

		System::Data::DataSet^ selectionnerToutLesPaiement(System::String^);
		void ajouterUnPaiement(System::String^, System::String^, System::String^);
		void supprimerPaiement(System::String^);
		void updateUnPaiement( System::String^, System::String^, System::String^);
		

	};
}