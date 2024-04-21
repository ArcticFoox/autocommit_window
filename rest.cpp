//3052 math
#include<iostream>

using namespace std;

int arr[43];

int main(){
    for(int i = 0; i < 10; i++){
        int num;
        cin >> num;
        arr[num % 42]++;
    }

    int cnt = 0;
    for(int i = 0; i < 43; i++){
        if(arr[i]) cnt++;
    }

    cout << cnt;
    
    return 0;
}