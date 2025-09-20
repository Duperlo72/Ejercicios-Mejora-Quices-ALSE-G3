#include <iostream>
using namespace std;

int main(){
    int n; 
    double precio, total = 0;

    cout << "Calculadora de Costo Total en Tienda de Abastos" << endl;

    cout << "Ingrese la cantidad de productos: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        cout << "Ingrese el precio del producto " << i << ": ";
        cin >> precio;
        total += precio;
    }

    cout << "El costo total de los " << n << " productos es: " << total << endl;

    return 0;
}
