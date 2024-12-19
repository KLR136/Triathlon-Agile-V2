#ifndef NATATION_H
#define NATATION_H
#include "epreuve.h"
#include "triathlon.h"

class Natation : public Epreuve
{
public:
    Natation(int temperature, string gps_d, string gps_f, Triathlon* leTriathlon, Inscription inscriptions);
    ~Natation();

    int getTemperature();

private:
    int temperature;
    Inscription lesInscriptions;
};


#endif // NATATION_H
