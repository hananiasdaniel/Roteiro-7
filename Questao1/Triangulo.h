#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "Figura.h"

using namespace std;

class Triangulo : public Figura{
private:
	int baseT, alturaT;
public:
	Triangulo();
	Triangulo(string, int, int);

	void setBaseT(int);
	int getBaseT();
	void setAlturaT(int);
	int getAlturaT();
	
	float calcularArea();

};

#endif
