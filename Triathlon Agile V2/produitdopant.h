#ifndef PRODUITDOPANT_H
#define PRODUITDOPANT_H
#include <string>
#include "taux.h"

using namespace std;

class ProduitDopant
{
public:
	ProduitDopant();
	ProduitDopant(int code, string libelle, float taux);
	~ProduitDopant();
	float getLeTaux();

private:
	int code;
	string libelle;
	float taux;
};

#endif // !PRODUITDOPANT_H
