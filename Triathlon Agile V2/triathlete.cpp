#ifndef TRIATHLETE_CPP
#define TRIATHLETE_CPP
#include "triathlete.h"
#include "categorie.h"
#include <iostream>

Triathlete::Triathlete()
{
}

Triathlete::Triathlete(int numlicense, string nom, string prenom, string genre, string adresse, string date_naiss, Categorie* categorie_age, Inscription* inscription)
{
	this->n_license = numlicense;
	this->nom = nom;
	this->prenom = prenom;
	this->sexe = genre;
	this->adresse = adresse;
	this->date_naiss = date_naiss;
	this->categorie_age = categorie_age;
	this->inscription = inscription;
}

Triathlete::~Triathlete()
{
}

Inscription* Triathlete::getLesinscritptions()
{
	return inscription;
}

Categorie* Triathlete::getLaCategorie()
{
	return categorie_age;
}

bool Triathlete::equipeFranceMarathon()
{
	return false;
}

string Triathlete::affiche()
{
	return "Nom : " + nom +
		"\nPrenom : " + prenom +
		"\nSexe : " + sexe +
		"\nAdresse : " + adresse +
		"\nDate de naissance : " + date_naiss +
		"\nNumero de licence : " + std::to_string(n_license) +
		"\nCategorie d'age : " + this->categorie_age->getLibelle();
}


int Triathlete::getNumLicence()
{
	return n_license;
}
#endif // !TRIATHLETE_CPP
