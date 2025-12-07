// se solicita que el usuario seleccione de las vocales una letra para determinar el color q contiene

#include <iostream>

using namespace std;

int main() {

	cout << "----------------------------------------" << endl;
	cout << "Programador: Sanchez Vega Said Jesus" << endl; 
	cout << "Grupo: 3IV13" << endl;
	cout << "Fecha: 12/11/2025" << endl;
	cout << "----------------------------------------" << endl;

	char vocal;
	
	cout << "Ingresa una vocal para conocer su color: ";
	cin >> vocal;
	
	// estructura de seleccion multiple
	
	switch(vocal) {
	case 'a': case 'A':
		cout << "amarillo";
		break;
	case 'e': case 'E':
		cout << "cafe";
		break;
	case 'i': case 'I':
		cout << "verde";
		break;
	case 'o': case 'O':
		cout << "rojo";
		break;
	case 'u': case 'U':
		cout << "azul";
		break;
	default:
		cout << "el programa solo tiene 5 letras";
		break;
	}
	
	return 0;
}
