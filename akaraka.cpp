//32652 basic
#include<iostream>

using namespace std;

int main(){
    string str = "AKARAKA";
    int k;
    cin >> k;

    for(int i = 1; i < k; i++){
        str += "RAKA";
    }

    cout << str;
    return 0;
}