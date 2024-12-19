#ifndef PRODUITDOPANT_CPP
#define PRODUITDOPANT_CPP
#include "produitdopant.h"

ProduitDopant::ProduitDopant()
{
}

ProduitDopant::ProduitDopant(int code, string libelle, float taux)
{
	this->code = code;
	this->libelle = libelle;
	this->taux = taux;
}

ProduitDopant::~ProduitDopant()
{
}

float ProduitDopant::getLeTaux()
{
	return taux;
}
#endif // !PRODUITDOPANT_CPP
