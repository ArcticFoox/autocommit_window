//4375 bruteforce
#include<iostream>

using namespace std;

int main(){
    int n;
    int digit;
    
    while(scanf("%d", &n) != EOF){
        digit = 1;
        int num = 1;
        while(true){
            if(num % n == 0){
                break;
            }
            digit++;
            num = num * 10 + 1;
            num %= n;
        }
        cout << digit << '\n';
    }
    return 0;
}