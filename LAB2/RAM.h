#pragma once
class RAM
{
	char* modelRAM;
	int memoryRAM;
public:
	RAM(const char* model, int mememory);
	void Init();
	void Print()const;
	~RAM();
};

