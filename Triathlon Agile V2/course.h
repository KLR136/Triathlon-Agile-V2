#ifndef COURSE_H
#define COURSE_H
#include "epreuve.h"
#include <iostream>

using namespace std;

class Course : public Epreuve
{
public:
	Course(int denivel�Pos, int denivel�Neg);
	~Course();
	virtual int affiche();
private:
	int denivel�Pos;
	int denivel�Neg;
};

#endif // !COURSES_H
