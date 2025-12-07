#include <iostream>

using namespace std;

int main() {
	
	String color;
	
	cout << "Ingresa tu color fav";
	cin >> color;
	
	if(color == "Amarillo" || color == "amarillo") {
		cout << "Tu color fav es amarillo vamooo";
	} else {
		cout << "Tu color fav no es amarillo";
	}
	
	
	return 0;
}
