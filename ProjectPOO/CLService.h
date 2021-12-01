#pragma once
#include "CLMappageCommandes.h"
#include "CLCad.h"
//#include "CLMappageArticles.h"
//#include "CLMappageFactures"

namespace NS_Comp_Svc
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLCad^ oCad;
		NS_Comp_Mappage::CLMappageCommandes^ oMappCommandes;
		//NS_Comp_Mappage::CLMappageSuperviseurs^ oMappSuperviseurs;
	public:
		CLservices(void);
		System::Data::DataSet^ selectionnerToutesLesCommandes(System::String^);
		void ajouterUnCommandes(System::String^, System::String^, System::String^, System::String^, System::String^);
		void supprimerUnCommandes(System::String^);
		void updateUnCommandes(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);

		/*System::Data::DataSet^ selectionnerToutesLesSuperviseurs(System::String^);
		void ajouterUnSuperviseur(System::String^, System::String^, System::String^, System::String^);
		void supprimerUnSuperviseur(System::String^);
		void updateUnSuperviseur(System::String^, System::String^, System::String^, System::String^, System::String^);
		*/

	};
}