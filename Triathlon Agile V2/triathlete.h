#pragma once
#include "inscription.h"
#include "categorie.h"
#include <string> // Assurez-vous d'inclure string pour éviter l'erreur de définition

using namespace std;

class Inscription;
class Categorie;

class Triathlete
{
public:
    Triathlete();
    Triathlete(int numlicense, string nom, string prenom, string genre, string adresse, string date_naiss, Categorie* categorie_age, Inscription* inscription);
    ~Triathlete();
    Inscription* getLesinscritptions();
    Categorie* getLaCategorie();
    bool equipeFranceMarathon();
    string affiche();
    int getNumLicence();

private:
    int n_license;
    string nom;
    string prenom;
    string sexe;
    string adresse;
    string date_naiss;
    Categorie* categorie_age;
    Inscription* inscription;
};
