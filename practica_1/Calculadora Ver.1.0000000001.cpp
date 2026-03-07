#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    char operacion;

    cout << "Calculadora (suma y resta)" << endl;

    cout << "Ingresa el primer numero: ";
    cin >> num1;

    cout << "Ingresa la operacion (+ o -): ";
    cin >> operacion;

    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    if (operacion == '+') {
        cout << "Resultado: " << num1 + num2 << endl;
    }
    else if (operacion == '-') {
        cout << "Resultado: " << num1 - num2 << endl;
    }
    else {
        cout << "Operacion no valida." << endl;
    }

    return 0;
}