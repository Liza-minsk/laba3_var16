// slad.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include"stdafx.h"
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

	Kond_izde t;
	t.setName("tort");
	t.getName();
	cout << "Konditerskoe izdelie " << t.getName() << endl;

	cout << endl;

	Konfeta k;
	k.setName("Romashka");
	k.getName();
	k.setFabrik("Komunarka");
	k.getFabrik();
	cout << "Konfeta " << k.getName() << " Fabrika " << k.getFabrik() << endl;
	cout << endl;

	Karamel l;
	l.setName("Raduga");
	l.getName();
	l.setVkus("Jabloko");
	l.getVkus();
	l.setFabrik("Spartak");
	l.getFabrik();
	cout << "Karamel " << l.getName() << " Vkus " << l.getVkus() <<" Fabrika "<<l.getFabrik()<<endl;
	cout << endl;

	Shok_konf sh;
	sh.setName("Griljashc");
	sh.getName();
	sh.setShok_konf("Oreh");
	sh.getShok_konf();
	sh.setFabrik("Komunarka");
	sh.getFabrik();

	cout << "Shokoladnaja konfeta  " << sh.getName() << " Nachika " << sh.getShok_konf() <<" Fabrika "<<sh.getFabrik()<<endl;
	cout << endl;

	Pechen p;
	p.setName("Pesochnoe");
	p.getName();
	p.setIngred("Marmelad");
	p.getIngrid();
	cout << "Pechen " <<p.getName()<<" ingredient  "<<p.getIngrid()<<endl;
	cout << endl;

	/*Kond_izde *q=new Kond_izde("test1");
	Kond_izde *q1 = new Konfeta("test2","test4");
	Kond_izde *q3 = new Shok_konf("test5", "test6", "test7");
	q->print_1();
	q->print();
	q1->print();
	cout << endl;
	q3->print();
	cout << endl;*/
	return 0;
}

