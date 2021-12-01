#pragma once
#include "CLMappageClient.h"
#include "CLCad.h"


namespace NS_Comp_Svc
{
    ref class CLservices
    {
    private:
        NS_Comp_Data::CLCad^ oCad;
        NS_Comp_Mappage::CLMappageClient^ oMappClient;
    public:
        CLservices(void);
        System::Data::DataSet^ selectionnerToutesLesClient(System::String^);
        void ajouterUnePersonne(System::String^, System::String^, System::String^, System::String^, System::String^);
        void updateUnePersonne(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
        void supprimerUnePersonne(System::String^);
    };
}
