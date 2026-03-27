#include <iostream>
using namespace std;

int main() {
    float num1, num2, num3;
    char operacion;
    float resultado;

    cout << "Calculadora en C++" << endl;

    cout << "Ingresa el primer numero: ";
    cin >> num1;

    cout << "Ingresa la operacion (+, -, *, /): ";
    cin >> operacion;

    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    cout << "Ingresa un tercer numero (opcional, escribe 0 si no quiers usarlo): ";
    cin >> num3;

    if (operacion == '+') {
        resultado = num1 + num2 + num3;
    }
    else if (operacion == '-') {
        resultado = num1 - num2 - num3;
    }
    else if (operacion == '*') {
        resultado = num1 * num2 * num3;
    }
    else if (operacion == '/') {
        if (num2 == 0 || num3 == 0) {
            cout << "Error: no se puede dividir entre cero." << endl;
            return 0;
        }
        resultado = num1 / num2 / num3;
    }
    else {
        cout << "Operacion no valida." << endl;
        return 0;
    }

    cout << "Resultado: " << resultado << endl;

    return 0;
}
    
