/* 

Programa: simular un cajero automatico con un saldoinicial de 5000, las opciones son: 1. ingresar dinero en la cuenta, 2. retirar dinero de la cuenta. 3. salir

*/

#include <iostream>

using namespace std;

int main() {

	cout << "----------------------------------------" << endl;
	cout << "Programador: Sanchez Vega Said Jesus" << endl; 
	cout << "Grupo: 3IV13" << endl;
	cout << "Fecha: 12/11/2025" << endl;
	cout << "----------------------------------------" << endl;
	
	int opcion, montoingresado, montoactual = 5000;
	
	cout << "¡Bienvenido a tu cajero de confianza! Elige alguna de las siguientes operaciones: " << "\n1. Deposito en la cuenta" << "\n2. Retirar dinero" << "\n3. Salir" << endl;
	cin >> opcion;
	
	switch(opcion) {
		
		case 1:
			cout << "¿Cuanto dinero quieres ingresar?: ";
			cin >> montoingresado;
			
			montoactual = montoingresado + montoactual;
			
			cout << "Tu saldo actual es de: " << montoactual;
			break;
		case 2:
			cout << "¿Cuanto dinero quieres retirar?: ";
			cin >> montoingresado;
			
				if(montoingresado <= montoactual) {
					montoactual = montoactual - montoingresado;
					cout << "Saldo nuevo: " << montoactual;
				} else {
					while(montoingresado > montoactual) {
					cout << "El monto ingresado es mayor al monto actual, elige otra cantidad" << endl;
					cin >> montoingresado;
					if(montoingresado <= montoactual) {
						montoactual = montoactual - montoingresado;
						cout << "Al fin, nuevo saldo: " << montoactual;
						}
					}
				}
			
			break;
		case 3:
			cout << "Bai";
			break;
		default:
			cout << "opcion no encontrada"
			break;
			
	}
	
	return 0;
	
}
