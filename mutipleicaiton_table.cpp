//32710 basic
#include<iostream>

using namespace std;

bool num[100];

int main(){
    int n; 

    cin >> n;

    for(int i = 2; i < 10; i++){
        for(int j = 1; j < 10; j++){
            num[i] = true;
            num[j] = true;
            num[i * j] = true;
        }
    }

    cout << num[n];
    return 0;
}