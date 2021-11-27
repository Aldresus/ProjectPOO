#pragma once

ref class ClNature{
	private:
		int id_nature;
		System::String^ nature;

	public:
		ClNature();
		~ClNature();
		void setID_nature(int id_nature);
		int getID_nature();
		void setNature(System::String^ nature);
		System::String^ getNature();
};
