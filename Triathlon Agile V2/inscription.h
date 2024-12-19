#ifndef INSCRIPTION_H
#define INSCRIPTION_H
#include "prelevement.h"
#include "epreuve.h"
#include "temps.h"

using namespace std;

class Triathlon;
class Triathlete;

class Inscription
{
public:
	Inscription();
	Inscription(int dossard, string date_i, bool forfait, int classement_c, Triathlete* triathlete, Prelevement* prelevement, Triathlon* nom_triathlon, Temps* temps, Epreuve* epreuve[2]);
	~Inscription();
	Triathlon* getLeTriathlon();
	Temps* getLesTemps();
	Epreuve* getLesTroisEpreuves();
	Prelevement* getLesPrelevements();
	bool estForfait();
	Triathlete* getLeTriathlete();
private:
	int dossard;
	string date_i;
	bool forfait;
	int classement_c;
	Triathlete* triathlete;
	Prelevement* prelevement;
	Triathlon* nom_triathlon;
	Temps* temps;
	Epreuve* epreuve[2];
};


#endif // !INSCRIPTION_H
