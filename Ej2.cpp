/*Ejercicio N°2
Implementar una función recursiva que determine la suma de los “n” primeros
números naturales ej: para n=5 mostrar por pantalla 1+2+3+4+5 y luego el
resultado de la suma*/
#include <iostream>
using namespace std;
int suma(int n);

int main() {
    int n=5, s;
    s= suma(n);
    cout << "suma: "<< endl;
    for(int i=n;i>0;--i){
        cout<<i<<"+";
    }
    cout << "0 = "<<s<< endl;

    return 0;
}
int suma(int n){
    if(n==1){
        return 1;
    }else{
        return (n + suma(n-1));
    }
}