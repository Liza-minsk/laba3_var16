#pragma once
#include"stdafx.h"
#include"Kond_izdel.h"
#include"string"
class Karamel :public Kond_izde
{
	std::string name;
public:
	Karamel(void);
	void setKaramel(std::string vkus);
	void getKaramel(void);
	~Karamel();

};
