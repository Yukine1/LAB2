#include "GPU.h"
#include <iostream>
using namespace std;
GPU::GPU(const char* model, int ghz)
{
	if (this->modelGPU != nullptr)
	{
		delete[]this->modelGPU;
	}
	this->modelGPU = new char[strlen(model) + 1];
	strcpy_s(this->modelGPU, strlen(model) + 1, model);
	this->ghz = ghz;
}
void GPU::Init()
{
	char buff[20];
	cout << "Enter model: ";
	gets_s(buff,20);
	this->modelGPU = new char[strlen(buff) + 1];
	strcpy_s(this->modelGPU, strlen(buff) + 1, buff);

	cout << "Enter ghz of GPU: ";
	cin >> this->ghz;
	cin.ignore();
}

void GPU::Print()const
{
	cout << "\tGPU" << endl;
	cout << "Model: " << this->modelGPU << endl;
	cout << "GHZ: " << this->ghz << endl;
}

GPU::~GPU()
{
	delete[]this->modelGPU;
	this->modelGPU = nullptr;
}
