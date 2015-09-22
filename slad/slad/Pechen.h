#pragma once
#include"Kond_izdel.h"
#include"string"
class Pechen : public Kond_izde
{
	std::string name;
public:
	Pechen(void);
	void Pechen::setIngrid(std::string ing);
	void Pechen::getIndrid(void);
	~Pechen();

};