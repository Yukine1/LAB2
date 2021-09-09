#include "RAM.h"
#include <iostream>
using namespace std;
RAM::RAM(const char* model, int mem)
{
	if (this->modelRAM != nullptr)
	{
		delete[]this->modelRAM;
	}
	this->modelRAM = new char[strlen(model) + 1];
	strcpy_s(this->modelRAM, strlen(model) + 1, model);
	this->memoryRAM = mem;
}

void RAM::Init()
{
	char buff[20];
	cout << "Enter model: ";
	gets_s(buff, 20);
	this->modelRAM = new char[strlen(buff) + 1];
	strcpy_s(this->modelRAM, strlen(buff) + 1, buff);

	cout << "Enter size of memory for RAM: ";
	cin >> this->memoryRAM;
	cin.ignore();
}

void RAM::Print()const
{
	cout << "\tRAM" << endl;
	cout << "Model: " << this->modelRAM << endl;
	cout << "Size of memory: " << this->memoryRAM << endl;
}

RAM::~RAM()
{
	delete[]this->modelRAM;
	this->modelRAM = nullptr;
}
