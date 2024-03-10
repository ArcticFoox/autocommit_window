//8393 basic
#include<iostream>

using namespace std;

int sum;

int main(){

    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    
    cout << sum;
    return 0;
}