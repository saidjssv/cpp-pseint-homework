#include <iostream>

using namespace std;

int main() {

cout << "----------------------------------------" << endl;
	cout << "Programador: Sanchez Vega Said Jesus" << endl; 
	cout << "Grupo: 3IV13" << endl;
	cout << "Fecha: 12/11/2025" << endl;
	cout << "----------------------------------------" << endl;
	
	int i = 1;
	string nombre;
	
	cout << "Ingresa tu nombre vrochacho: ";
	cin >> nombre;
	
	do {
		cout << i << ".- " << nombre << endl;
		i++;
	} while(i <= 17);
	
}
