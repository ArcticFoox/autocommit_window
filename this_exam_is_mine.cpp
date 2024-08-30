//31922 basic
#include<iostream>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if(a + c < b){
        cout << b;
    } else {
        cout << a + c;
    }
    return 0;
}