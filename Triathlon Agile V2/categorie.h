#ifndef CATEGORIE_H
#define CATEGORIE_H
#include <string>
#include "triathlete.h"


class Categorie
{
public:
	Categorie(int code_categorie_age, string categorie_age, int age_min, int age_max, Triathlete** lesTriathletes);
	~Categorie();
	Triathlete** getLesTriathletes();
	Triathlete* LesTriathletesASurveiller();
	void addLeTriathletes(Triathlete** lesTriathlètes);
	string getLibelle();
private:
	int code;
	string libellé;
	int age_min;
	int age_max;
	Triathlete** lesTriathletes;
};
#endif 
