//3047 basic
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int arr[3];

    for(int i = 0; i < 3; i++){
        cin >> arr[i];
    }

    sort(arr, arr+3);

    string str;
    cin >> str;

    for(int i = 0; i < str.size(); i++){
        cout << arr[str[i] - 'A'] << ' ';
    }
    return 0;
}