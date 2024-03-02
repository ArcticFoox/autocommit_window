//1008 iofloat
#include<iostream>

using namespace std;

double a, b;

int main(){
    cin >> a >> b;

    cout.precision(12);
    cout << fixed;
    cout << a / b;
    return 0;
}