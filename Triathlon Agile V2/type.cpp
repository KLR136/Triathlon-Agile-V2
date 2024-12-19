#ifndef TYPE_CPP
#define TYPE_CPP
#include "type.h"

Type::Type()
{
}

Type::Type(int id_type, string genre, float distance_natation, float distance_velo, float distance_pied)
{
	this->code = id_type;
	this->libellé = genre;
	this->long_nage = distance_natation;
	this->long_vélo = distance_velo;
	this->long_pied = distance_pied;
}

Type::~Type()
{
}

float Type::getLongVelo()
{
	return long_vélo;
}

float Type::getLongNage()
{
	return long_nage;
}

string Type::affiche()
{
	return "Code: " + to_string(code) + "\n" +
		"Libellé: " + libellé + "\n" +
		"Distance Natation: " + to_string(long_nage) + " km\n" +
		"Distance Vélo: " + to_string(long_vélo) + " km\n" +
		"Distance Course à Pied: " + to_string(long_pied) + " km";
}
#endif // !TYPE_CPP
