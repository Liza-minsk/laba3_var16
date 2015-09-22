#pragma once
#include"stdafx.h"
#include"Kond_izdel.h"
#include<iostream>
#include<string>
class Shok_konf : public Kond_izde
{
	std::string name;
public:
	Shok_konf(void);
	void setShok_konf(std::string nachinka);
	void getShok_konf(void);
	~Shok_konf();
};

