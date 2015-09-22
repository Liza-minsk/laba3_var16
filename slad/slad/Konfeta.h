#pragma once
#include"string"
#include"Kond_izdel.h"
class Konfeta : public Kond_izde
{
	std::string f;
public:
	Konfeta(void);
	void setFabrik(std::string f);
	void getFabrik(void);
	~Konfeta();
};

