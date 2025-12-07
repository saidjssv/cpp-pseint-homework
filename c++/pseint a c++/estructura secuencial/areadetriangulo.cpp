#include <iostream>

using namespace std;

int main() {
	
	int base, altura;
	
	cout << "Ingresa el valor de la base de tu triangulo: ";
	cin >> base;
	cout << "Ingresa el valor de la altura de tu triangulo: ";
	cin >> altura;
	
	float resultado = (base * altura) / 2;
	
	cout << "Tu resultado es: " << resultado;
	
	return 0;
}
