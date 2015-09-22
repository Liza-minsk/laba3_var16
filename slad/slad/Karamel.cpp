#include "Karamel.h"
#include"Konfeta.h"
#include"stdafx.h"
#include<string>
#include<iostream>
using namespace std;

Karamel::Karamel(){}

Karamel::Karamel(std::string vk, std::string f): Konfeta(f)
{
	vkus = vk;
}

void Karamel::setVkus(std::string vk)
{
	vkus = vk;
}
std::string Karamel::getVkus()
{
	return vkus;
}
void Karamel::print()
{
	cout << "Karamel" << endl;
	Konfeta::print();
	cout << getVkus() << endl;
}

Karamel::~Karamel()
{
	cout << "Destructor karameli" << endl;
}
