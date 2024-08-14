/*Ejercicio N°4
Crear un programa que emplee recursividad para calcular el mayor de los
elementos de un vector de “n” tamaño dado por pantalla por el usuario.*/
#include <iostream>
using namespace std;
int mayor(int a[], int n);
int menor(int a[], int n);

int main() {
    int n, s, t;
    int *a = new int[n];
    cout<<"Ingrese tamanio del arreglo: ";
    cin>>n;
    cout<<"Ingrese los numeros a comparar: ";
    for(int i=0; i<n;i++){
        cout<<i+1<<". ";
        cin>>a[i];
    }
    s= mayor(a, n);
    cout<<"\n\nEl mayor es: "<<s<<endl;
    t= menor(a, n);
    cout<<"\nEl Menor es: "<<t<<endl;
    return 0;
}
int mayor(int a[], int n){
    if(n==1){
        return a[0];
    }
    int MayorQelAnterior= mayor(a, n-1);

    if(a[n-1]>MayorQelAnterior){
        return a[n-1];
    }else{
        return MayorQelAnterior;
    }

}
int menor(int a[], int n){
    if(n==1){
        return a[0];
    }
    int MenorQelAnterior= menor(a, n-1);

    if(a[n-1]<MenorQelAnterior){
        return a[n-1];
    }else{
        return MenorQelAnterior;
    }

}