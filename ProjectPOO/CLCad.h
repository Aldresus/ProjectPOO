#pragma once

ref class CLcad
{
	private:
		System::String^ sSQL;
		System::String^ sCnx;
		System::Data::SqlClient::SqlConnection oCnx ;
		System::Data::SqlClient::SqlCommand oCms;
		System::Data::SqlClient::SqlDataAdapter oDA;

	public:
		CLcad();
		~CLcad();
		System::Data::DataSet^ getRows(System::String^ sSql, System::String^ sDataTableName);
		void actionRows(System::String^);
};

