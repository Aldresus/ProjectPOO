#include "CLMappageStats.h"
System::String^ NS_Comp_Mappage::CLMappageStats::produitSousSeuilReapro(void)
{
	return "SELECT * FROM CLient ";
}

System::String^ NS_Comp_Mappage::CLMappageStats::panierMoyenApresRemise(void)
{
	return "SELECT * FROM Article ";
}