#pragma once

#include "CLCad.h"
#include "CLMappageStocks.h"

namespace NS_Comp_Svc
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLCad^ oCad;
		NS_Comp_Mappage::CLMappageStocks^ oMappageStocks;

	public:
		CLservices(void);
		System::Data::DataSet^ selectionnerToutesLesArticles(System::String^);
		void ajouterUnArticle(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void supprimerUnArticle(System::String^);
		void updateUnArticle(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);



	};
}