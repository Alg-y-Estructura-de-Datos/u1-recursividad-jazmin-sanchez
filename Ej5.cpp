/*Ejercicio N°5
Crear un programa que pida al usuario un número entero positivo "n" y un dígito
"d". Luego crear una función recursiva que determine si “d” está en “n”. Si está, la
función debe retornar verdadero y si no está debe retornar falso.
Ej.: si n=1323 y d = 5, retorna Falso y si d= 1 retorna verdadero.*/
#include <iostream>
using namespace std;

int main() {
    
    return 0;
}
bool invertir(int n, int d){
    if(n==0){
        return false;
    }
    if(n % 10 == d){
        return true;
    }
    Invertir(n / 10, d);
}