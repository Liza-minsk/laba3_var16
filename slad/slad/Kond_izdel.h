#pragma once
#include<iostream>
#include "string"
class Kond_izde
{
	std::string name;
public:
	Kond_izde (std::string);
	Kond_izde();
	void setName (std::string );
	std::string getName();
	virtual void print();
	~Kond_izde();

};

