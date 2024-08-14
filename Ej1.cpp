/*Ejercicio N°1
Implemente una función para potencias enteras con recursividad. Definición
recursiva para elevar un número a una potencia: Un número elevado a la potencia
cero produce la unidad; la potencia de un número se obtiene multiplicándolo por
sí mismo elevando a la potencia menos uno. 
*/
#include <iostream>
using namespace std;
int potencia(int n, int a);

int main() {
    int n=3, b=2, s;
    s= potencia(n,b);

    cout << "Resultado: "<<s << endl;

    return 0;
}

int potencia(int n, int a){
    if(n==0){
        return 1;
    }else{
        return (a* potencia(n-1, a));
    }
}