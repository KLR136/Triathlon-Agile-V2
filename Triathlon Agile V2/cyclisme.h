#ifndef CYCLISME_H
#define CYCLISME_H
#include "course.h"

using namespace std;

class Cyclisme : public Course
{
public:
	Cyclisme(int pente);
	~Cyclisme();
	int affiche();
private:
	int pente;
};
#endif // !CYCLISME_H
