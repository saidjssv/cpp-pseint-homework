#include <iostream>

using namespace std;

int main() {
    int calificacion[10], materias = 0, suma = 0;
    float promedio = 0.0;

    cout << "Eres estudiante regular o irregular? Ingresa el número de materias reprobadas: ";
    cin >> materias;

    switch(materias)
    {
    case 0:
        cout << "Eres estudiante regular felicidades!" << endl;
        break;
    case 1: case 2:
        cout << "Eres estudiante irregular, pero aún tienes oportunidad de mejorar." << endl;
        break;
    default:
        cout << "Vas mal, hagamos esto: Ingresa tus calificaciones:" << endl;

        for(int i = 0; i < 10; i++) {
            cout << "Calificación " << i + 1 << ": ";
            cin >> calificacion[i];
            suma += calificacion[i];
        }

        promedio = suma / 10.0;

        cout << "Tu promedio es: " << promedio << " Eres irregular." << endl; 
    
        break;
    }

}