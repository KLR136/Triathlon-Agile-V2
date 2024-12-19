#ifndef INSCRIPTION_CPP
#define INSCRIPTION_CPP
#include "inscription.h"

Inscription::Inscription()
{
}

Inscription::Inscription(int dossard, string date_i, bool forfait, int classement_c, Triathlete* triathlete, Prelevement* prelevement, Triathlon* nom_triathlon, Temps* temps, Epreuve* epreuve[2])
{
	this->dossard = dossard;
	this->date_i = date_i;
	this->forfait = forfait;
	this->classement_c = classement_c;
	this->triathlete = triathlete;
	this->prelevement = prelevement;
	this->nom_triathlon = nom_triathlon;
	this->temps = temps;
	for (int i = 0; i < 2; i++)
	{
		this->epreuve[i] = epreuve[i];
	}
}

Inscription::~Inscription()
{
}

Triathlon* Inscription::getLeTriathlon()
{
	return nom_triathlon;
}

Temps* Inscription::getLesTemps()
{
	return temps;
}

Epreuve* Inscription::getLesTroisEpreuves()
{
	return *epreuve;
}

Prelevement* Inscription::getLesPrelevements()
{
	return prelevement;
}

bool Inscription::estForfait()
{
	return false;
}

Triathlete* Inscription::getLeTriathlete()
{
	return triathlete;
}
#endif // !INSCRIPTION_CPP
