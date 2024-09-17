//4673 brute-force
#include<iostream>

using namespace std;

bool check[10001];

int d(int n){
    int sum = n;

    while(n != 0){
        sum += n % 10;
        n = n / 10;
    }

    return sum;
}

int main(){
    for(int i = 1; i < 10001; i++){
        int num = d(i);
        if(num < 10001) check[num] = true;
    }

    for(int i = 1; i < 10001; i++){
        if(!check[i]) cout << i << '\n';
    }

    return 0;
}