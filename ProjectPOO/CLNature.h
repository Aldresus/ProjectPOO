#pragma once

ref class CLNature{
	private:
		int id_nature;
		System::String^ nature;

	public:
		void setID_nature(int id_nature);
		int getID_nature();
		void setNature(System::String^ nature);
		System::String^ getNature();
};
