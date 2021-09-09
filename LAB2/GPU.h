#pragma once
class GPU
{
	char* modelGPU;
	int ghz;
public:
	GPU(const char* model, int ghz);
	void Init();
	void Print()const;
	~GPU();
};

