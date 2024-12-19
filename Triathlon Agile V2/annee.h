#ifndef ANNEE_H
#define ANNEE_H
#include "prelevement.h"

class Année
{
public:
	Année(ProduitDopant dope);
	~Année();
	ProduitDopant dope();
private:
	int num = 0;
	ProduitDopant produitdopant;
};

#endif // !ANNEE_H
