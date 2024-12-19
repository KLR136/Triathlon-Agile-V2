#ifndef EPREUVE_H
#define EPREUVE_H

#include <string>

using namespace std;

class Triathlon;

class Epreuve
{
public:
    Epreuve();
    Epreuve(string gps_d, string gps_f, Triathlon* leTriathlon);
    virtual ~Epreuve();
    virtual Triathlon* getLeTriathlon();
protected:
    string gps_d;
    string gps_f;
    Triathlon* leTriathlon;
};

#endif // EPREUVE_H
