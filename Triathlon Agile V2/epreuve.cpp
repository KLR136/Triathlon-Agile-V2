#include "epreuve.h"

Epreuve::Epreuve()
{
}

Epreuve::Epreuve(string gps_d, string gps_f, Triathlon* leTriathlon) : gps_d(gps_d), gps_f(gps_f), leTriathlon(leTriathlon)
{
}

Epreuve::~Epreuve()
{
}

Triathlon* Epreuve::getLeTriathlon()
{
    return leTriathlon;
}
