#ifndef FIGURA_H
#define FIGURA_H
#include <string>

using namespace std;

class Figura{
private:
	string nome;
public:

	void setNome(string);
	string getNome();

	virtual float calcularArea();
};

#endif
