#include <iostream>

using namespace std;


int main() {

    // este codigo fue hecho en linux, por eso el ejecutable no es .exe
    cout << "----------------------------------------" << endl;
	cout << "Programador: Sanchez Vega Said Jesus" << endl; 
	cout << "Grupo: 3IV13" << endl;
	cout << "Fecha: 12/11/2025" << endl;
	cout << "----------------------------------------" << endl;

    int cant_libs, cant_cuads, cant_plumas;

    cout << "Ingrese la cantidad de libros que quiera comprar: ";
    cin >> cant_libs;
    cout << "Ingrese la cantidad de cuadernos que quiera comprar: ";
    cin >> cant_cuads;
    cout << "Ingrese la cantidad de plumas que quiera comprar: ";
    cin >> cant_plumas;

    int total = (cant_libs * 100) + (cant_cuads * 50) + (cant_plumas * 10);

    cout << "El total a pagar es: " << total << endl;
    return 0;
}