#include <iostream>

using namespace std;

int main() {
	
	cout << "----------------------------------------" << endl;
	cout << "Programador: Sanchez Vega Said Jesus" << endl; // endl: salto de linea o \n
	cout << "Grupo: 3IV13" << endl;
	cout << "Fecha: 12/11/2025" << endl;
	cout << "----------------------------------------" << endl;
		
	int a, b, sumar, restar, multiplicar;
	float dividir;
	
	cout << "Ingresa dos numeros:" << endl;
	
	cin >> a >> b;
	
	sumar = a + b;
	restar = a - b;
	multiplicar = a * b;
	dividir = a / b;
	
	cout << "--------------------------------" << endl;
	cout << sumar << endl << restar << endl << multiplicar << endl << dividir;
	
	
	return 0;
}
