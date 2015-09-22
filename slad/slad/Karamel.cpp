#include "Karamel.h"
#include"stdafx.h"
#include<iostream>
using namespace std;

Karamel::Karamel(void)
{
	cout << "Konstructor dlja karameli" << endl;
}

void Karamel::setKaramel(std::string vkus)
{
	this->vkus = vkus;
}

void Karamel::getKaramel(void)
{
	cout << "Karamel so vkusom" << this->vkus << endl;
}

Karamel::~Karamel()
{
	cout << "Destructor karameli" << endl;
}
