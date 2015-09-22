#include"Pechen.h"
#include"stdafx.h"
#include<iostream>
using namespace std;
Pechen ::Pechen(void)
{
	cout << "Vizov constructora dlaj pechen" << endl;
}

void Pechen::setIngrid(std::string ing)
{
	this->ing = ing;
}

void Pechen::getIndrid(void)
{
	cout << "Ingridient "<< this->ing << endl;
}

Pechen::~Pechen()
{
	cout << "Destructor pechenja" << endl;
}
