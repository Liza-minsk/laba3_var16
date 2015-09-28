// slad.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<locale>
#include"Kond_izdel.h"
#include"Pechen.h"
#include"Konfeta.h"
#include"Karamel.h"
#include"Shokolad_kon.h"
#include"stdafx.h"
using namespace std;


int main()
{

	Kond_izde t;
	t.setName("tort");
	t.getName();

	cout << endl;

	Konfeta k;
	k.setName("Romashka");
	k.getName();
	k.setFabrik("Komunarka");
	k.getFabrik();

	cout << endl;

	Karamel l;
	l.setName("Raduga");
	l.getName();
	l.setVkus("Jabloko");
	l.getVkus();

	cout << endl;

	Shok_konf sh;
	sh.setName("Griljashc");
	sh.getName();
	sh.setShok_konf("Oreh");
	sh.getShok_konf();

	cout << endl;

	Pechen p;
	p.setName("Pesochnoe");
	p.getName();
	p.setIngred("Marmelad");
	p.getIngrid();

	cout << endl;


	return 0;
}

