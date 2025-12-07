#include <iostream>

using namespace std;

int main() {
	
	cout << "----------------------------------------" << endl;
	cout << "Programador: Sanchez Vega Said Jesus" << endl; 
	cout << "Grupo: 3IV13" << endl;
	cout << "Fecha: 12/11/2025" << endl;
	cout << "----------------------------------------" << endl;
	
	int c1, c2, c3;
	float promedio;
	
	cout << "Ingresa tus calificaciones de los tres parciales para determinar si apruebas o no" << endl;
	cin >> c1 >> c2 >> c3;
	
	promedio = (c1 + c2 + c3) / 3;
	
	if(promedio >= 6) {
		cout << "Tu promedio es aprobatorio, ggpapa. Tu promedio es: " << promedio;
	} else {
		cout << "reprobaste ff papa. Tu promedio es: " << promedio;
	}
	
	return 0;
	
}
