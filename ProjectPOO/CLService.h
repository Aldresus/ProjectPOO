#pragma once
#include "CLMappageEmploye.h"
#include "CLCad.h"
#include "CLMappageSuperviseurs.h"

namespace NS_Comp_Svc
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLCad^ oCad;
		NS_Comp_Mappage::CLMappageEmploye^ oMappEmploye;
		NS_Comp_Mappage::CLMappageSuperviseurs^ oMappSuperviseurs;
	public:
		CLservices(void);
		System::Data::DataSet^ selectionnerToutesLesEmploye(System::String^);
		void ajouterUnEmploye(System::String^, System::String^, System::String^, System::String^, System::String^);
		void supprimerUnEmploye(System::String^);
		void updateUnEmploye(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);

		System::Data::DataSet^ selectionnerToutesLesSuperviseurs(System::String^);
		void ajouterUnSuperviseur(System::String^, System::String^, System::String^, System::String^);
		void supprimerUnSuperviseur(System::String^);
		void updateUnSuperviseur(System::String^, System::String^, System::String^, System::String^, System::String^);


	};
}



