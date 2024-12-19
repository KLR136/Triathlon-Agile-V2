#ifndef TRIATHLON_CPP
#define TRIATHLON_CPP
#include "triathlon.h"

Triathlon::Triathlon()
{
}

Triathlon::Triathlon(int id, string nom, string lieu, string date, Inscription** lesInscriptions, Epreuve* epreuve[2], Type type)
{
	this->Id = id;
	this->Nom = nom;
	this->Lieu = lieu;
	this->Date = date;
	this->type = type;
	for (int i = 0; i < 2; i++)
	{
		this->epreuve[i] = epreuve[i];
	}
}

Triathlon::~Triathlon()
{
}

Epreuve* Triathlon::getLesEpreuves()
{
	return epreuve[2];
}

Type Triathlon::getLeType()
{
	return type;
}

Inscription Triathlon::getLesInscriptions()
{
	return Inscription();
}


void Triathlon::addLesinscriptions(Inscription** lesInscriptions)
{
	this->lesInscriptions = lesInscriptions;
}
#endif // !TRIATHLON_CPP
