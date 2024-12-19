#ifndef COURSE_H
#define COURSE_H
#include "epreuve.h"
#include <iostream>

using namespace std;

class Course : public Epreuve
{
public:
	Course(int deniveléPos, int deniveléNeg);
	~Course();
	virtual int affiche();
private:
	int deniveléPos;
	int deniveléNeg;
};

#endif // !COURSES_H
