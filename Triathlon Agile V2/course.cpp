#ifndef COURSE_CPP
#define COURSE_CPP
#include "course.h"

Course::Course(int deniveléPos, int deniveléNeg) : Epreuve("", "", getLeTriathlon())
{
	this->deniveléPos = deniveléPos;
	this->deniveléNeg = deniveléNeg;
}

Course::~Course()
{
}

int Course::affiche()
{
	std::cout << "Course : " << deniveléPos << "m de dénivelé positif et " << deniveléNeg << "m de dénivelé négatif" << std::endl;
	return 0;
}
#endif // !COURSE_CPP
