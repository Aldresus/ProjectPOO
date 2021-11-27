#pragma once

ref class CLClient{
	private:
		int id_client;
		System::String^ nom_client;
		System::String^ prenom_client;
		System::String^ date_de_naissance;
		System::String^ date_inscription;

	public:
		CLClient();
		~CLClient();
		void setID_client(int id_client);
		int getID_client();
		void setNom_client(System::String^ nom_client);
		System::String^ getNom_client();
		void setDate_de_naissance(System::String^ date_de_naissance);
		System::String^ getDate_de_naissance();
		void setDate_inscription(System::String^ date_inscription);
		System::String^ getDate_inscription();
};

