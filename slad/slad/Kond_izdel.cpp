#include "Kond_izdel.h"
#include"stdafx.h"
#include<iostream>
using namespace std;
Kond_izde::Kond_izde(std::string n)
{
	name = n;
}

Kond_izde::Kond_izde()
{
	name = "";
}
Kond_izde::~Kond_izde()
{
	cout << "Destuctor nazvanija konditerskogo izdelija" << endl;
}
void Kond_izde::setName(std::string nam)
{
	name = nam;
}

std::string Kond_izde::getName()
{
	return name;
}
void Kond_izde::print()
{
	cout << "Konditerskoe izdelie" << endl;
	cout << "Nazvanie:" << getName() << endl;

}


