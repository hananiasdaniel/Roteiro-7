#include <iostream>
#include "Figura.h"
#include "Triangulo.h"

Triangulo::Triangulo(){}

Triangulo::Triangulo(string n, int b, int h){
	setNome(n);	
	setBaseT(b);
	setAlturaT(h);
}

void Triangulo::setBaseT(int b){
	setNome("Triangulo");	
	
	if(b < 0){
		cout << "base negativa nao existe" << endl;
	}else if(b == 0){
			cout << "Nao existe area" << endl;
		}else{
			baseT = b;
			}
}

int Triangulo::getBaseT(){
	return baseT;
}

void Triangulo::setAlturaT(int h){
	if(h < 0){
		cout << "altura negativa nao existe" << endl;
	}else if(h == 0){
			cout << "Nao existe area" << endl;
		}else{
			alturaT = h;
			}
}

int Triangulo::getAlturaT(){
	return alturaT;
}

float Triangulo::calcularArea(){
	return ((baseT * alturaT) / 2);
}
