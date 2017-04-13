#include <iostream>
#include "Figura.h"
#include "Quadrado.h"
#include "Triangulo.h"
#include "Circulo.h"


using namespace std;

int main(){

	int b, h, r;
	int escolha;
	string nome;
	
	cout << "Este programa calcula a area de alguns solidos geometricos" << endl;

	
	
	while(true){
	
	
	cout << "Qual solido voce deseja calcular a area:" << endl;
	cin >> nome;

	if(nome == "Quadrado" || nome == "quadrado"){
	
	cout << "Digite a base do quadrado?" << endl;
	cin >> b;
	cout << "Digite a altura do quadrado?" << endl;
	cin >> h;
	
	Quadrado Q(nome, b, h);

	
	cout << " A area do " << Q.getNome() << " e : " << Q.calcularArea() << endl;
	}
	
	else if(nome == "Triangulo" || nome == "triangulo"){
	cout << "Digite a base do triangulo?" << endl;
	cin >> b;
	cout << "Digite a altura do triangulo?" << endl;
	cin >> h;
	
	Triangulo T(nome, b, h);

	cout<<"A area do "<< T.getNome() << " e : " << T.calcularArea() << endl;

	} else if (nome == "Circulo" || nome == "circulo"){
	
	cout << "Digite o raio do seu circulo?" << endl;
	cin >> r;
	
	Circulo C(nome, r);

	cout<<"A area do "<< C.getNome() << " e : " << C.calcularArea() << endl;

	


	}else{
		cout<<"OBG POR USAR NOSSO PROGRAMA"<<endl;
		return 1;
	}

	}
	
	
	


	return 0;
}
