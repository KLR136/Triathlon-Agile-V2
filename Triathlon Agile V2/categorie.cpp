#ifndef CATEGORIE_CPP
#define CATEGORIE_CPP
#include "categorie.h"


Categorie::Categorie(int code_categorie_age, string categorie_age, int age_min, int age_max, Triathlete** lesTriathletes)
{
	this->code = code_categorie_age;
	this->libellé = categorie_age;
	this->age_min = age_min;
	this->age_max = age_max;
}

Categorie::~Categorie()
{
}

Triathlete** Categorie::getLesTriathletes()
{
	return lesTriathletes;
}

Triathlete* Categorie::LesTriathletesASurveiller()
{
	return NULL;
}

void Categorie::addLeTriathletes(Triathlete** lesTriathlètes)
{
	this->lesTriathletes = lesTriathlètes;
}

string Categorie::getLibelle()
{
	return libellé;
}
#endif // !CATEGORIE_CPP
