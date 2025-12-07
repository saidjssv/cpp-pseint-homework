/*

Solicita al usuario seleccionar del siguiente listado un numero para determinar la suma, resta, y division y que indique el programa salir

*/

#include <iostream>

using namespace std;

int main() {
	
	cout << "----------------------------------------" << endl;
	cout << "Programador: Sanchez Vega Said Jesus" << endl; 
	cout << "Grupo: 3IV13" << endl;
	cout << "Fecha: 12/11/2025" << endl;
	cout << "----------------------------------------" << endl;	
		
	int numero, a, b;
	float result;
	
	cout << "Seleccione de la siguiente lista un numero: " << endl << "1. Suma" << "\n2. Resta" << "\n3. División" << "\n4. Salir" << endl;
	cin >> numero;
	
	switch(numero) {
		case 1:
			cout << "Ingrese dos numeros: ";
			cin >> a >> b;
			
			result = a + b;
			
			cout << "Tu suma es: " << result;
			break;
		case 2:
			cout << "Ingrese dos numeros: ";
			cin >> a >> b;
			
			result = a - b;
			
			cout << "Tu resta es: " << result;
			
			break;
		case 3:
			cout << "Ingrese dos numeros: ";
			cin >> a >> b;
			
			result = a / b;
			
			cout << "Tu division es: " << result;
			break;
		case 4:
			break;
		default: 
		cout << "Elige un numero de la lista antes proporcionada, no otro.";
		break;
	} 
	
	return 0;
	
}
