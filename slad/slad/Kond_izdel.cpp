#include "Kond_izdel.h"
#include"stdafx.h"
#include<iostream>
using namespace std;
Kond_izde::Kond_izde(void)
{
	cout << "Viziv constructora dlja konditerskogo izdelija " << endl;
}

void Kond_izde::setName(std::string name)
{
	this->name = name;
}

void Kond_izde::getName()
{
	cout << "Nazvanie konditerskogo izdelija" << this->name << endl;
}

Kond_izde::~Kond_izde()
{
	cout << "Destuctor nazvanija konditerskogo izdelija" << endl;
}

