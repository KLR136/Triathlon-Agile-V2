#include "natation.h"

Natation::Natation(int temperature, string gps_d, string gps_f, Triathlon* leTriathlon, Inscription inscriptions)
    : Epreuve(gps_d, gps_f, leTriathlon), temperature(temperature), lesInscriptions(inscriptions)
{
}


Natation::~Natation()
{
}

int Natation::getTemperature()
{
    return temperature;
}
