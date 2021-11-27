#pragma once

ref class CLCad
{
	private:
		System::String^ sSql;
		System::String^ sCnx;
		System::Data::SqlClient::SqlConnection^ oCnx ;
		System::Data::SqlClient::SqlCommand^ oCms;
		System::Data::SqlClient::SqlCommand^ oCmd;
		System::Data::SqlClient::SqlDataAdapter^ oDA;
		System::Data::DataSet^ oDs;

	public:
		CLCad();
		System::Data::DataSet^ getRows(System::String^ sSql, System::String^ sDataTableName);
		void actionRows(System::String^);
};

