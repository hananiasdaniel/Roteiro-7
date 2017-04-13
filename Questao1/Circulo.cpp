#include <iostream>
#include "Figura.h"
#include "Circulo.h"

Circulo::Circulo(){}

Circulo::Circulo(string n, int r){
	setNome(n);
	setRaio(r);
}

void Circulo::setRaio(int r){
	
	setNome("Circulo");

	if(r < 0){
		cout << "Raio negativo nao existe" << endl;
	}else if(r == 0){
			cout << "Nao existe area" << endl;
		}else{
			raio = r;
			}
}

int Circulo::getRaio(){
	return raio;
}

float Circulo::getPI(){
	return pi;
}

float Circulo::calcularArea(){
	return pi * (raio * raio);
}
