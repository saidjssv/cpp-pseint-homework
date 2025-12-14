#include <iostream>

using namespace std;


/*  
    Se repite demasiado codigo :sob:
    Lo dejare para mejorarlo en algun momento o dia, espero.
*/

int main() {

    cout << "----------------------------------------" << endl;
    cout << "Programador: Sanchez Vega Said Jesus" << endl;
    cout << "Grupo: 3IV13" << endl;
    cout << "Fecha: 12/11/2025" << endl;
    cout << "----------------------------------------" << endl;

    int litros, kg, total, azucar = 50, frijol = 65, arroz = 28, aceite = 48, leche = 70;
    char inciso;

    cout << "Elija alguno de los siguientes productos: \na) Azucar $50/kg \nb) Frijol $65/kg \nc) Arroz $28/kg \nd) Aceite $48/litro \ne) Leche $70/litro" << endl << "Ingrese su elección (En minúscula): ";
    cin >> inciso;

    switch(inciso) {
        case 'a': 
            cout << "Ingrese la cantidad de kg de azucar que desea comprar: ";
            cin >> kg;
            total = azucar * kg;
            cout << "El total a pagar por " << kg << "kg de azucar es: $" << total << endl;
            break;
        case 'b':
            cout << "Ingrese la cantidad de kg de frijol que desea comprar: ";
            cin >> kg;
            total = frijol * kg;
            cout << "El total a pagar por " << kg << "kg de frijol es: $" << total << endl;
            break;
        case 'c':
            cout << "Ingrese la cantidad de kg de arroz que desea comprar: ";
            cin >> kg;
            total = arroz * kg;
            cout << "El total a pagar por " << kg << "kg de arroz es: $" << total << endl;
            break;
        case 'd':
            cout << "Ingrese la cantidad de litros de aceite que desea comprar: ";
            cin >> litros;
            total = aceite * litros;
            cout << "El total a pagar por " << litros << " litros de aceite es: $" << total << endl;
            break;
        case 'e':
            cout << "Ingrese la cantidad de litros de leche que desea comprar: ";
            cin >> litros;
            total = leche * litros;
            cout << "El total a pagar por " << litros << " litros de leche es: $" << total << endl;
            break;
        default:
            cout << "Opción no válida." << endl;
            break;
    }
}