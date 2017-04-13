#include <iostream>
#include "Figura.h"
#include "Quadrado.h"

Quadrado::Quadrado(){}

Quadrado::Quadrado(string n, int b, int h){
	setNome(n);
	setBaseQ(b);
	setAlturaQ(h);
}

void Quadrado::setBaseQ(int b){
	
	setNome("Quadrado");

	if(b<0){
		cout << "area invalida" << endl;
	}else{
		baseQ = b;
	}
}

int Quadrado::getBaseQ(){
	return baseQ;
}

void Quadrado::setAlturaQ(int h){
	if(h<0){
		cout << "altura invalida" << endl;
	}else{
		alturaQ = h;
	}
}

int Quadrado::getAlturaQ(){
	return alturaQ;
}

float Quadrado::calcularArea(){
	return baseQ * alturaQ;
}

