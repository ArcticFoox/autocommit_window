//11050 implementation
#include<iostream>

using namespace std;

int facto(int num){
    if(num == 0) return 1;

    int result = 1;

    for(int i = num; i >= 1; i--) result *= i;

    return result;
}

int facto2(int num){
    if(num == 1 || num == 0) return 1;
    else{
        return facto2(num-1) * num;
    }
}

int main(){
    int n, k;
    cin >> n >> k;

    cout << facto(n) / (facto(k) * facto(n-k));
    cout << facto2(n) / (facto2(k) * facto2(n-k));
    return 0;
}