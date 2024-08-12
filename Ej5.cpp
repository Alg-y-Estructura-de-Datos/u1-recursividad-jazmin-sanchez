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