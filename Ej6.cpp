/*Ejercicio N°6
Crear un programa que pida al usuario un número entero positivo "n". Luego
implementar una función recursiva que cuente la cantidad de dígitos pares que
ocupan posiciones impares (identificándolas de izquierda a derecha) en "n". Ej.: si
el número es 22005 el resultado es 2, y si fuera 1414 el resultado es 0. */
#include <iostream>
using namespace std;
int contarParesEnPosicionesImpares(int n, int pos );

int main() {
    int n;
    int d;
    cout << "Ingrese cantidad de digitos: ";
    cin >> d;

    cout << "Ingrese un numero entero positivo: ";
    cin >> n;

    // Contar dígitos pares en posiciones impares usando la función recursiva
    int resultado = contarParesEnPosicionesImpares(n,d);

    cout << "Cantidad de digitos pares en posiciones impares: " << resultado << endl;

    return 0;
}
int contarParesEnPosicionesImpares(int n, int pos ) {
    // Caso base:
    if (n == 0) {
        return 0;
    }

    int digitoActual = n % 10;
    if (pos % 2 != 0 && digitoActual % 2 == 0) {
        return 1 + contarParesEnPosicionesImpares(n / 10, pos - 1);
    } else {
        // Realizar la llamada recursiva sin incrementar el contador
        return contarParesEnPosicionesImpares(n / 10, pos - 1);
    }
}