#include <iostream>

using namespace std;

int main () {
	int numero;
	
	cout << "Ingresa tu numero: ";
	cin >> numero;
	
	if(numero % 2 == 0) {
		cout << "Tu numero es par" << endl;
	} else {
		cout << "Tu numero es impar" << endl;
	}
	return 0;	
}
