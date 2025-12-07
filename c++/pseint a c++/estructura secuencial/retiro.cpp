#include <iostream>

using namespace std;

int main() {
	int NIP, monto;
	
	cout << "Bienvenido al banco del bienestar! Ingresa tu NIP para continuar: ";
	cin >> NIP;
	
	if(NIP != 2363) {
		cout << "Nip incorrecto";
	} else {
		cout << "Elija la cantidad a retirar: ";
		cin >> monto;
		cout << "Dinero a retirar: " << monto;
	}
	
	return 0;
}
