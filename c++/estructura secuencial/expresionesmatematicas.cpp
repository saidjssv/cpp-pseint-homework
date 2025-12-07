#include <iostream>

using namespace std;

int main() {
	
	cout << "----------------------------------------" << endl;
	cout << "Programador: Sanchez Vega Said Jesus" << endl; // endl: salto de linea o \n
	cout << "Grupo: 3IV13" << endl;
	cout << "Fecha: 12/11/2025" << endl;
	cout << "----------------------------------------" << endl;	
	
	int a, b , c, d, e, f;
	float r1, r2, r3, r4;
	
	cout << "Ola, ingresa los siguientes datos para resolver las expresiones matematicas: " << endl;	
	cin >> a >> b >> c >> d >> e >> f;
	
	r1 = (a / b) + 1;
	r2 = (a + b) / (c + d);
	r3 = (a + (b / c)) / (d + (e / f));
	r4 = (a * (b / (c - d)));
	
	cout << "Resultado de la primera expresión (**(a / b) + 1**): " << r1 << endl;
	cout << "Resultado de la segunda expresión (**(a + b) / (c + d)**): " << r2 << endl;
	cout << "Resultado de la tercera expresión (**(a + (b / c)) / (d + (e / f))**): " << r3 << endl;
	cout << "Resultado de la cuarta expresión (**(a * (b / (c - d)))**): " << r4 << endl;
	
	return 0;
}
