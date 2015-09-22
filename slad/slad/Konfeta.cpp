#include"Konfeta.h"
#include"stdafx.h"
#include<iostream>
using namespace std;

Konfeta::Konfeta(void)
{
	cout << "Constructor dlja konfeti" << endl;
}

void Konfeta::setFabrik(std::string f)
{
	this->f = f;
}

void Konfeta::getFabrik(void)
{
	cout << "Fabrika konfeti"<<this->f << endl;
}

Konfeta::~Konfeta()
{
	cout << "Constructor konfeti" << endl;
}
