//2355 math
#include<iostream>

using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;
    if(a <= b)
        cout << (b - a + 1) * (b + a) / 2;
    else
        cout << (a - b + 1) * (b + a) / 2;
    return 0;
}