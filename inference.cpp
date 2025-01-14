//1731 math
#include<iostream>

using namespace std;

int arr[51];
int n, q;

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    if(arr[1] - arr[0] == arr[2] - arr[1]){
        q = arr[1] - arr[0];
        cout << arr[n - 1] + q;
    }
    else{
        for(int i = 2; arr[0] * i < 1987654321; i++){
            if(arr[0] * i == arr[1]){
                q = i;
                break;
            }
        }

        cout << arr[n - 1] * q;
    }

    return 0;
}