#include <iostream>

// se pide mostrar en pantalla el listado de numeros del uno al 15, esto se realizara con las estructuras de repeticion while, do while, for

using namespace std;

int main() {

	cout << "----------------------------------------" << endl;
	cout << "Programador: Sanchez Vega Said Jesus" << endl; 
	cout << "Grupo: 3IV13" << endl;
	cout << "Fecha: 12/11/2025" << endl;
	cout << "----------------------------------------" << endl;
	
	int i = 1;
	
	cout << "while" << endl;
	while(i <= 15) {
		cout << i << endl;
		i = i + 1;
	}
	
	i = 1;
	cout << "do-while" << endl;
	do {
		cout << i << endl;
		i = i + 1;
	} while(i <= 15);
	
	cout << "for" << endl;
	
	for(i = 1; i <= 15; i++) {
		cout << i << endl;
	}
	
	
}
