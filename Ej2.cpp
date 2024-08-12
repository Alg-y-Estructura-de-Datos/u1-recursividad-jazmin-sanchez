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