#ifndef COURSE_H
#define COURSE_H
#include "epreuve.h"
#include <iostream>

using namespace std;

class Course : public Epreuve
{
public:
	Course(int denivelÚPos, int denivelÚNeg);
	~Course();
	virtual int affiche();
private:
	int denivelÚPos;
	int denivelÚNeg;
};

#endif // !COURSES_H
