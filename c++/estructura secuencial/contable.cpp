#include <iostream> // nombre del programa. contable

using namespace std;

int main() {
	
	cout << "----------------------------------------" << endl;
	cout << "Programador: Sanchez Vega Said Jesus" << endl; // endl: salto de linea o \n
	cout << "Grupo: 3IV13" << endl;
	cout << "Fecha: 12/11/2025" << endl;
	cout << "----------------------------------------" << endl;
	float preciofinal, producto;
	
	cout << "Ingresa el precio de tu producto: ";
  	cin >> producto;

  	preciofinal = producto * 0.16;

  	cout << "Muy bien, el precio final de tu producto es: " << preciofinal + producto<< endl;
  	cout << "Y el precio inicial de tu producto era: " << producto << endl;
	
	return 0;
}
