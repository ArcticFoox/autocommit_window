//5597 basic
#include<iostream>

using namespace std;

bool arr[31];

int main(){
    for(int i = 0; i < 28; i++){
        int num;
        cin >> num;
        arr[num] = true;
    }

    for(int i = 1; i < 31; i++){
        if(!arr[i]) cout << i << '\n';
    }
    return 0;
}