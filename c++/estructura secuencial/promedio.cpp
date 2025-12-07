#include <iostream>

using namespace std;

int main() {
	
	cout << "----------------------------------------" << endl;
	cout << "Programador: Sanchez Vega Said Jesus" << endl; // endl: salto de linea o \n
	cout << "Grupo: 3IV13" << endl;
	cout << "Fecha: 12/11/2025" << endl;
	cout << "----------------------------------------" << endl;
	
	// este programa solicita un promeio de un estudiante para saber si tiene beca utilizar if
	
	int promedio;
	
	cout << "Ingresa tu promedio para saber si tienes beca" << endl;
	cin >> promedio;
	
	if(promedio >= 7) {
		cout << "Tu promedio te permite tener beca de ipn" << endl;
	} else {
		cout << "Tu promedio es menor al requerido para la beca" << endl;	
	}
	
	return 0;
} 
