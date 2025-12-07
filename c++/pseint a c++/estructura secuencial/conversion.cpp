#include <iostream>

using namespace std;

int main() {
	
	int num_pulg;
	
	cout << "Ingresa el número de pulgadas que quieres convertir: ";
	cin >> num_pulg;
	
	float result = num_pulg * 2.54;
	
	cout << "El resultado de tu conversión: " << result;
	
	return 0;
	
}
