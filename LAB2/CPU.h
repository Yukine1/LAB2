#pragma once
class CPU
{
	char* modelCPU;
	int core;
public:
	CPU(const char* model, int core);
	void Input();
	void Print()const;
	~CPU();
};

