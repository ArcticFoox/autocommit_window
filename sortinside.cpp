//1427 sort
#include<iostream>
#include<algorithm>

using namespace std;

char arr[10];

int main(){
    string str;
    cin >> str;

    for(int i = 0; i < str.size(); i++){
        arr[i] = str[i];
    }
    
    sort(arr, arr+str.size(), greater<int>());

    for(int i = 0; i < str.size(); i++){
        cout << arr[i];
    }
    return 0;
}