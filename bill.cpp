//5565 math
#include<iostream>

using namespace std;

int main(){
    int sum;
    cin >> sum;
    for(int i = 0; i < 9; i++){
        int num;
        cin >> num;
        sum -= num;
    }
    cout << sum;
    return 0;
}