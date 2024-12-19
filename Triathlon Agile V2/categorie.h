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
	void addLeTriathletes(Triathlete** lesTriathl�tes);
	string getLibelle();
private:
	int code;
	string libell�;
	int age_min;
	int age_max;
	Triathlete** lesTriathletes;
};
#endif 
