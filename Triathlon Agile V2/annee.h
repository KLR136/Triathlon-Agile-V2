#ifndef ANNEE_H
#define ANNEE_H
#include "prelevement.h"

class Ann�e
{
public:
	Ann�e(ProduitDopant dope);
	~Ann�e();
	ProduitDopant dope();
private:
	int num = 0;
	ProduitDopant produitdopant;
};

#endif // !ANNEE_H
