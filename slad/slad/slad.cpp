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
using namespace std;


int main()
{
	setlocale(LC_ALL,"Russian");
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
	l.setKaramel("Jabloko");
	l.getKaramel();

	cout << endl;

	Shok_konf sh;
	sh.setName("Griljashc");
	sh.getName();
	sh.setShok_konf("Oreh");
	sh.getShok_konf();

	cout << endl;

	Pechen p;
	p.setName("Kreker");
	p.getName();
	p.setIngrid("Muka");
	p.getIndrid();

	cout << endl;

	
    return 0;
}

