#ifndef CYCLISME_CPP
#define CYCLISME_CPP
#include "cyclisme.h"

Cyclisme::Cyclisme(int pente) : Course(0, 0)
{
	this->pente = pente;
}

Cyclisme::~Cyclisme()
{
}

int Cyclisme::affiche()
{
	std::cout << "Cyclisme : " << pente << "° de pente" << std::endl;
	return 0;
}
#endif // !CYCLISME_CPP
