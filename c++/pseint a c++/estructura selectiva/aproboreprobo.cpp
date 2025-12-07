#include <iostream>

using namespace std;

int main() {
    // este codigo fue hecho en linux, por eso el ejecutable no es .exe
    cout << "----------------------------------------" << endl;
	cout << "Programador: Sanchez Vega Said Jesus" << endl; 
	cout << "Grupo: 3IV13" << endl;
	cout << "Fecha: 12/11/2025" << endl;
	cout << "----------------------------------------" << endl;

    int calif1, calif2, calif3;

    cout << "Ingresa tus tres calificaciones: ";
    cin >> calif1 >> calif2 >> calif3;
    
    float promedio = (calif1 + calif2 + calif3) / 3;

    if(promedio >= 6) {
        cout << "Aprobaste con un promedio de: " << promedio << endl;
    } else {
        cout << "Reprobaste con un promedio de: " << promedio << endl;
    }
}