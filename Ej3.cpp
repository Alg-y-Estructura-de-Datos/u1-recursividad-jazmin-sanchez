/*Ejercicio N°3
Implementar una función recursiva que dado un número entero lo muestre de
forma invertida ej: 10523 de mostrar 32501. Dar aviso de error en caso de uso de
números negativos y mostrar primero el número a invertir y después el número
invertido.*/
#include <iostream>
using namespace std;

int main() {
    int numero = 10523;
    cout << "Numero original: " << numero << endl;

    if (numero < 0) {
        cout << "Error: Numero negativo no permitido." << endl;
        return 1;
    }

    int inv = 0;
    invertido(numero, inv);

    cout << "Numero invertido: " << inv << endl;
    return 0;
}
void invertir(int n, int& inv){ //n=123, inv=0
    if(n==0){
        return ;
    }else{
        inv= inv * 10 + n % 10;   //inv= 0 * 10 + 123 % 10 = 0 + 3
                                  //inv= 3 * 10 + 12 % 10 = 30 + 2
                                  //inv= 32 * 10 + 1 % 10 = 320 + 1
        mostrarInvertido(a / 10, inv);
    }                              //invertido(123/10, 3)
                                   //invertido(12/10, 32)
                                   //invertido(1/10, 321)
                                   //return;
}