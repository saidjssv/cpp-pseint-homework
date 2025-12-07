#include <iostream>

using namespace std;

int main() {
	int gasto, descuento;
	
	cout << "Introduce el total de tu gasto: ";
	cin >> gasto;
	cout << "Introduce tu descuento: ";
	cin >> descuento;
	
	// este ejercicio originalmente era secuencial pero decidí agregar una validación
	
	if(descuento > 100) {
		cout << "Dato invalido.";
	} else {
		int total = ((gasto * descuento) / 100);
		cout << "Tu descuento fue: " << total;
	}
	
	return 0;
}
