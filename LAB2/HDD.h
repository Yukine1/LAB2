#pragma once
class HDD
{
	char* modelHDD;
	int memoryHDD;
public:
	HDD(const char* model, int mememory );
	void Init();
	void Print()const;
	~HDD();
};

