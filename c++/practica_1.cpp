#include <iostream> 

/*
	Hasta los mejores cometen errores xdxdxdxd
*/

using namespace std;

int main() {

	cout << "----------------------------------------" << endl;
	cout << "Programador: Sanchez Vega Said Jesus" << endl; 
	cout << "Grupo: 3IV13" << endl;
	cout << "Fecha: 12/11/2025" << endl;
	cout << "----------------------------------------" << endl;

	string respuesta; 
	// char respuesta;
	int edad;
	
	cout << "Ingresa tu edad: ";
	cin >> edad;
	
	if( edad >= 18 && edad <= 25) {
		cout << "Trabajas? (responde y si si, y n si no)" << endl;
		cin >> respuesta;
		
		switch(respuesta) { // ERA CHAR CREO JAKSDJASKJDKASJDKASJDKJASKD
			case "y": 
			// case 'y':
			cout << "felicidades.";
			break;
			case "n": 
			// case 'n':
				cout << "Ingresa nuevamente tu edad: ";
				cin >> edad;
				break;
			default:
				break;
		}
		
	} else if(edad <= 17) {
		cout << "Estudias? (responde y/n)" << endl;
		cin >> respuesta;
	}
	
	return 0;
	
}

