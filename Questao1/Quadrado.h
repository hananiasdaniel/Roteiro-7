#ifndef QUADRADO_H
#define QUADRADO_H
#include "Figura.h"

class Quadrado : public Figura{
private:
	int baseQ;
	int alturaQ;
public:
	Quadrado();
	Quadrado(string, int, int);
	void setBaseQ(int);
	int getBaseQ();

	void setAlturaQ(int);
	int getAlturaQ();

	float calcularArea();
};

#endif
