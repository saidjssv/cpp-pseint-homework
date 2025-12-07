/* 
	Problema: se le solicita un numero al usuario y determinar con el la tabla de multiplicar (con for)
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main() {
	
	cout << "----------------------------------------" << endl;
	cout << "Programador: Sanchez Vega Said Jesus" << endl; 
	cout << "Grupo: 3IV13" << endl;
	cout << "Fecha: 12/11/2025" << endl;
	cout << "----------------------------------------" << endl;
	
	int numero = 0;
	
	cout << "Ingrese un número para determinar su tabla de multiplicar: ";
	cin >> numero;
	
	for(int i = 0; i <= 10; i++) {
		
		int resultado = numero * i;
				
		cout << numero << " x " << i << " = " << resultado << endl;
	}
	
	system("pause");
	getch;
	return 0;
	
}
