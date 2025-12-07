#include <iostream>

using namespace std;

int main() {
    // este codigo fue hecho en linux, por eso el ejecutable no es .exe
    cout << "----------------------------------------" << endl;
	cout << "Programador: Sanchez Vega Said Jesus" << endl; 
	cout << "Grupo: 3IV13" << endl;
	cout << "Fecha: 12/11/2025" << endl;
	cout << "----------------------------------------" << endl;

    int edad;

    cout << "Ingresa tu edad: ";
    cin >> edad;

    if(edad >= 18) {
        cout << "Tu personaje es adulto." << endl;
    } else {
        cout << "Tu personaje es menor de edad." << endl;
    }
}