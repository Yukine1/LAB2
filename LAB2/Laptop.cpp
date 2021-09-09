#include "Laptop.h"
#include "CPU.h"
#include "RAM.h"
#include "HDD.h"
#include "GPU.h"
#include <iostream>
using namespace std;
Laptop::Laptop(const char* model, int price, const char* modelCPU, int core, const char* modelRAM, int memoryRAM, const char* modelHDD, int memoryHDD, const char* modelGPU, int ghz):cpu(modelCPU,core), ram(modelRAM,memoryRAM), hdd(modelHDD, memoryHDD), gpu(modelGPU, ghz)
{
	if (this->model!=nullptr)
	{
		delete[]this->model;
	}
	this->model = new char[strlen(model) + 1];
	strcpy_s(this->model, strlen(model) + 1, model);
	this->price = price;
}

void Laptop::Init()
{
	char buff[20];
	cout << "Enter model: ";
	gets_s(buff, 20);
	this->model = new char[strlen(buff) + 1];
	strcpy_s(model, strlen(buff) + 1, buff);
	
	cout << "Enter price of laptop: ";
	cin >> this->price;
	cin.ignore();
}

void Laptop::Print()const
{
	cout << "\tLAPTOP" << endl;
	cout << "Model: " << this->model << endl;
	cout << "Price: " << this->price << endl;
	cpu.Print();
	ram.Print();
	hdd.Print();
	gpu.Print();
}

Laptop::~Laptop()
{
	delete[]this->model;
	this->model = nullptr;
}
