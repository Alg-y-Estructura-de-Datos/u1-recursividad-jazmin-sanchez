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