#ifndef COURSE_CPP
#define COURSE_CPP
#include "course.h"

Course::Course(int denivel�Pos, int denivel�Neg) : Epreuve("", "", getLeTriathlon())
{
	this->denivel�Pos = denivel�Pos;
	this->denivel�Neg = denivel�Neg;
}

Course::~Course()
{
}

int Course::affiche()
{
	std::cout << "Course : " << denivel�Pos << "m de d�nivel� positif et " << denivel�Neg << "m de d�nivel� n�gatif" << std::endl;
	return 0;
}
#endif // !COURSE_CPP
