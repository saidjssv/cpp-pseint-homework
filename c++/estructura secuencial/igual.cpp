#include <iostream>

using namespace std;

int main () {
	cout << "----------------------------------------" << endl;
	cout << "Programador: Sanchez Vega Said Jesus" << endl; // endl: salto de linea o \n
	cout << "Grupo: 3IV13" << endl;
	cout << "Fecha: 12/11/2025" << endl;
	cout << "----------------------------------------" << endl;
	
	// se solicita ingresar un numero y determinar si es igual al del programa, si es igual mostrar que el numero que se ingreso es igual a 8, si no es asi mostrar que el numero no corresponde igual a 8

	int numero;
	
	cout << "Ingrese un numero para saber si es igual al del programa." << endl; 
	cin >> numero;
	
	if(numero == 8) {
		cout << "Tu numero es igual a 8" << endl;
	} else {
		cout << "Tu numero no corresponde al numero del programa que es igual a 8" << endl;
	}
	
	return 0;
}
