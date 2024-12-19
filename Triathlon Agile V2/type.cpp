#ifndef TYPE_CPP
#define TYPE_CPP
#include "type.h"

Type::Type()
{
}

Type::Type(int id_type, string genre, float distance_natation, float distance_velo, float distance_pied)
{
	this->code = id_type;
	this->libell� = genre;
	this->long_nage = distance_natation;
	this->long_v�lo = distance_velo;
	this->long_pied = distance_pied;
}

Type::~Type()
{
}

float Type::getLongVelo()
{
	return long_v�lo;
}

float Type::getLongNage()
{
	return long_nage;
}

string Type::affiche()
{
	return "Code: " + to_string(code) + "\n" +
		"Libell�: " + libell� + "\n" +
		"Distance Natation: " + to_string(long_nage) + " km\n" +
		"Distance V�lo: " + to_string(long_v�lo) + " km\n" +
		"Distance Course � Pied: " + to_string(long_pied) + " km";
}
#endif // !TYPE_CPP
