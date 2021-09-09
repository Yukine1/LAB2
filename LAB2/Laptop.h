#pragma once
#include"CPU.h"
#include"RAM.h"
#include"HDD.h"
#include"GPU.h"
class Laptop
{
	char* model;
	int price;
	CPU cpu;
	RAM ram;
	HDD hdd;
	GPU gpu;
public:
	Laptop(const char* model, int price, const char* modelCPU, int core, const char* modelRAM, int memryRAM, const char* modelHDD, int memoryHDD, const char* modelGPU, int ghz );
	void Init();
	void Print()const;
	~Laptop();

};

