#include <iostream>
#include <math.h>

using namespace std;

int main() {
	
	int radio;
	
	cout << "Ingresa el valor del radio de tu circunferencia: ";
	cin >> radio;
	
	float area = 3.14 * pow(radio, 2);
	
	cout << "El valor del area de tu circunferencia es: " << area;
	
	return 0;
	
}
