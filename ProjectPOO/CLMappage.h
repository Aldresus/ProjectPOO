#pragma once

ref class CLmappage{
	public:
		CLmappage();
		~CLmappage();
		System::String^ Insert(void);
		System::String^ Select(void);
		System::String^ Update(void);
		System::String^ Delete(void);
};

