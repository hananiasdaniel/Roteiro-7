#ifndef CIRCULO_H
#define CIRCULO_H
#include "Figura.h"

using namespace std;

class Circulo : public Figura{
private:
	int raio;
	const float pi = 3.14;
public:
	Circulo();
	Circulo(string, int);

	void setRaio(int);
	int getRaio();

	float getPI();
	
	float calcularArea();	

};

#endif
