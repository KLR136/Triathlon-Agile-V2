#ifndef TYPE_H
#define TYPE_H
#include <string>

using namespace std;

class Type
{
public:
	Type();
	Type(int code, string libellé, float long_nage, float long_vélo, float long_pied);
	~Type();
	float getLongVelo();
	float getLongNage();
	string affiche();
private:
	int code;
	string libellé;
	float long_nage;
	float long_vélo;
	float long_pied;
};

#endif // !1
