#include <iostream>

using namespace std;

int main() {

    // este codigo fue hecho en linux, por eso el ejecutable no es .exe
    cout << "----------------------------------------" << endl;
	cout << "Programador: Sanchez Vega Said Jesus" << endl; 
	cout << "Grupo: 3IV13" << endl;
	cout << "Fecha: 12/11/2025" << endl;
	cout << "----------------------------------------" << endl;

    string color;

    cout << "Ingresa tu color favorito: ";
    cin >> color;

    if(color == "Azul" || color == "azul") {
        cout << "Tu color es de la suerte omg" << endl;
    } else {
        cout << "Tu color no es de la suerte :c" << endl;
    }

}
