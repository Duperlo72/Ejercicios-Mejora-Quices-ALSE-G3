#include <iostream>
using namespace std;

int main(){
    int entregas;
    double distancia, total = 0;

    cout << "Rastreador de Distancias para Conductores de Entregas" << endl;


    cout << "Ingrese el numero de entregas realizadas: ";
    cin >> entregas;

    for(int i = 1; i <= entregas; i++){
        cout << "Ingrese la distancia recorrida en la entrega " << i << " (en km): ";
        cin >> distancia;
        total += distancia;
    }

    cout << "\nResumen del dia:" << endl;
    cout << "Distancia total recorrida: " << total << " km" << endl;
    cout << "Distancia promedio por entrega: " << total / entregas << " km" << endl;

    return 0;
}
