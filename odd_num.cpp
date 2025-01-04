//2576 basic
#include<iostream>

using namespace std;

int sum, Min = 1000;

int main(){
    for(int i = 0; i < 7; i++){
        int num;
        cin >> num;

        if(num % 2 == 1){
            sum += num;
            Min = min(Min, num);
        }
    }

    if(sum){
        cout << sum << '\n';
        cout << Min;
    }
    else{
        cout << -1;
    }
    return 0;
}