//10809 array
#include<iostream>

using namespace std;

int main(){
    int arr[26] = {-1, };
    for(int i = 0; i < 26; i++){
        arr[i] = -1;
    }
    string str;
    cin >> str;

    for(int i = 0; i < str.size(); i++){
        if(arr[str[i] - 'a'] != -1) continue;
        arr[str[i] - 'a'] = i;

    }

    for(int i = 0; i < 26; i++){
        cout << arr[i] << ' ';
    }
    return 0;
}