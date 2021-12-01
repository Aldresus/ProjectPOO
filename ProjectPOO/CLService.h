#pragma once
#include "CLCad.h"
#include "CLMappageStats.h"

namespace NS_Comp_Svc
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLCad^ oCad;
		NS_Comp_Mappage::CLMappageStats^ oMappStats;


	public:
		CLservices(void);
		System::Data::DataSet^ produitSousSeuilReapro(System::String^);
		System::Data::DataSet^ panierMoyenApresRemise(System::String^);
	};
}