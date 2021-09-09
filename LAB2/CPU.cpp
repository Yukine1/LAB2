#include "CPU.h"
#include <iostream>
using namespace std;
CPU::CPU(const char* model, int core)
{
	if (this->modelCPU!=nullptr)
	{
		delete[]this->modelCPU;
	}
	this->modelCPU = new char[strlen(model) + 1];
	strcpy_s(this->modelCPU,strlen(model)+1,model);
	this->core = core;
}

void CPU::Input()
{
	char buff[20];
	cout << "Enter model: ";
	gets_s(buff, 20);
	this->modelCPU = new char[strlen(buff) + 1];
	strcpy_s(this->modelCPU, strlen(buff) + 1, buff);

	cout << "Enter value of cores for CPU: ";
	cin >> this->core;
	cin.ignore();
}

void CPU::Print()const
{
	cout << "\tCPU" << endl;
	cout << "Model: " << this->modelCPU << endl;
	cout << "Value of cores: " << this->core << endl;
}

CPU::~CPU()
{
	delete[]this->modelCPU;
	this->modelCPU = nullptr;
}
