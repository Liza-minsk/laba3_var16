#include "Shokolad_kon.h"
#include"stdafx.h"
using namespace std;

Shok_konf::Shok_konf(void)
{
	cout << "Construct dlja shokoladnoi konfeti" << endl;
}

void Shok_konf::setShok_konf(std::string nachinka)
{
	this->nachinka = nachinka;
}

void Shok_konf::getShok_konf(void)
{
	cout << "Nachimka shokoladnoi konfeti"<<this->nachinka << endl;
}

Shok_konf::~Shok_konf()
{
	cout << "Destructor dlja shok_konfeti" << endl;
}
