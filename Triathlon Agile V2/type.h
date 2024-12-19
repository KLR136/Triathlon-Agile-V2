#ifndef TYPE_H
#define TYPE_H
#include <string>

using namespace std;

class Type
{
public:
	Type();
	Type(int code, string libell�, float long_nage, float long_v�lo, float long_pied);
	~Type();
	float getLongVelo();
	float getLongNage();
	string affiche();
private:
	int code;
	string libell�;
	float long_nage;
	float long_v�lo;
	float long_pied;
};

#endif // !1
