#pragma once
#include "CLMappageCommandes.h"
#include "CLCad.h"
//#include "CLMappageArticles.h"
#include "CLMappageFactures.h"

namespace NS_Comp_Svc
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLCad^ oCad;
		NS_Comp_Mappage::CLMappageCommandes^ oMappCommandes;
		NS_Comp_Mappage::CLMappageFactures^ oMappFactures;
	public:
		CLservices(void);
		System::Data::DataSet^ selectionnerToutesLesCommandes(System::String^);
		void ajouterUnCommandes(System::String^, System::String^, System::String^, System::String^, System::String^);
		void supprimerUnCommandes(System::String^);
		void updateUnCommandes(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);

		System::Data::DataSet^ selectionnerToutesLesFactures(System::String^);
		void ajouterUnFacture(System::String^, System::String^, System::String^, System::String^);
		void supprimerUnFacture(System::String^);
		void updateUnFacture(System::String^, System::String^, System::String^, System::String^, System::String^);
		

	};
}