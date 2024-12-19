#ifndef PRELEVEMENT_H
#define PRELEVEMENT_H
#include <string>
#include "produitdopant.h"

using namespace std;

class Prelevement
{
public:
	Prelevement(string id, string date, Taux taux, ProduitDopant produitdopant);
	~Prelevement();
	Taux getLesTaux();
	ProduitDopant ProduitDopantsPositif();
	bool estPositif();
private:
	string id;
	string date;
	Taux taux;
	ProduitDopant leProduitdopant;
};

#endif // !PRELEVEMENT_H
