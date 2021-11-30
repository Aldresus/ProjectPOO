#pragma once
namespace NS_Comp_Mappage
{
    ref class CLMappageClient
    {
    private:
        System::String^ sSql;
        System::String^ id_client;
        System::String^ nom_client;
        System::String^ prenom_client;
        System::String^ date_naissance_client;
        System::String^ date_inscription;
        System::String^ adresse_client;

    public:
        System::String^ Select(void);
        System::String^ Insert(void);
        System::String^ Delete(void);
        System::String^ Update(void);
        void setid_client(System::String^);
        void setnom_client(System::String^);
        void setprenom_client(System::String^);
        void setdate_naissance_client(System::String^);
        void setdate_inscription(System::String^);
        void setadresse_client(System::String^);

        System::String^ getid_client(void);
        System::String^ getnom_client(void);
        System::String^ getprenom_client(void);
        System::String^ getdate_naissance_client(void);
        System::String^ getdate_inscription(void);
        System::String^ getadresse_client(void);
    };
}
