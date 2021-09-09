#include "HDD.h"
#include <iostream>
using namespace std;
HDD::HDD(const char* model, int mememory)
{
	if (this->modelHDD != nullptr)
	{
		delete[]this->modelHDD;
	}
	this->modelHDD = new char[strlen(model) + 1];
	strcpy_s(this->modelHDD, strlen(model) + 1, model);
	this->memoryHDD = mememory ;
}

void HDD::Init()
{
	char buff[20];
	cout << "Enter model: ";
	gets_s(buff, 20);
	this->modelHDD = new char[strlen(buff) + 1];
	strcpy_s(this->modelHDD, strlen(buff) + 1, buff);

	cout << "Enter size of memory for HDD: ";
	cin >> this->memoryHDD;
	cin.ignore();
}

void HDD::Print()const
{
	cout << "\tHDD" << endl;
	cout << "Model: " << this->modelHDD << endl;
	cout << "Size if memory: " << this->memoryHDD << endl;
}

HDD::~HDD()
{
	delete[]this->modelHDD;
	this->modelHDD = nullptr;
}
