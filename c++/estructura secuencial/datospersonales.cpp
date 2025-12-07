// Se solicita los datos de una persona: edad, genero, altura, nombre y luego mostrarlos

#include <iostream>

using namespace std;

int main() {
	
	cout << "----------------------------------------" << endl;
	cout << "Programador: Sanchez Vega Said Jesus" << endl; // endl: salto de linea o \n
	cout << "Grupo: 3IV13" << endl;
	cout << "Fecha: 12/11/2025" << endl;
	cout << "----------------------------------------" << endl;
	
	string nombre;
	int edad;
	float altura;
	char genero[10];
	
	cout << "Ingresa tu nombre: ";
	cin >> nombre;
	cout << "Ingresa tu genero (masculino o femenino): ";
	cin >> genero;
	cout << "Ingresa tu edad: ";
	cin >> edad;
	cout << "Ingresa tu altura: ";
	cin >> altura;
	
	cout << "--------------------" << endl;
	cout << "A continuacion tus datos ingresados" << endl;
	cout << "Nombre: " << nombre << endl;
	cout << "Edad: " << edad << endl;
	cout << "Genero: " << genero << endl;
	cout << "Altura: " << altura;
	
	
	
	return 0;
	
}
