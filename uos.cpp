//32929 basic
#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    if(n % 3 == 1){
        cout << "U";
    }
    if(n % 3 == 2){
        cout << "O";
    }
    if(n % 3 == 0){
        cout << "S";
    }
    return 0;
}