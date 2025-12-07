#include <iostream>

using namespace std;

int main() {
	
	int calif1, calif2, calif3;
	
	cout << "Ingresa tus calificaciones de los tres parciales: " << endl;
	cin >> calif1 >> calif2 >> calif3;
	
	float promedio = (calif1 + calif2 + calif3) / 3;
	
	cout << "Tu calificación final es: " << promedio;
	
	return 0;
	
}
