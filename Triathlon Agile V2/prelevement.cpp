#ifndef PRELEVEMENT_CPP
#define PRELEVEMENT_CPP
#include "prelevement.h"

Prelevement::Prelevement(string id, string date, Taux taux, ProduitDopant produitdopant)
{
	this->id = id;
	this->date = date;
	this->taux = taux;
	this->leProduitdopant = produitdopant;
}

Prelevement::~Prelevement()
{
}

Taux Prelevement::getLesTaux()
{
	return taux;
}

ProduitDopant Prelevement::ProduitDopantsPositif()
{
	return leProduitdopant;
}

bool Prelevement::estPositif()
{
	return false;
}
#endif // !PRELEVEMENT_CPP
