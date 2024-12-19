#pragma once
#include "inscription.h"
#include "type.h"

using namespace std;


class Triathlon
{
public:
	Triathlon();
	Triathlon(int id, string nom, string lieu, string date, Inscription** lesInscriptions, Epreuve* epreuve[2], Type type);
	~Triathlon();
	Epreuve* getLesEpreuves();
	Type getLeType();
	Inscription getLesInscriptions();
	void addLesinscriptions(Inscription** lesInscriptions);
	string affiche();

private:
	int Id;
	string Nom;
	string Lieu;
	string Date;
	Inscription** lesInscriptions;
	Epreuve* epreuve[2];
	Type type;
};
