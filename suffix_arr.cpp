//11656 sort
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

vector<string> arr;

int main(){
    string str;

    cin >> str;

    for(int i = 0; i < str.size(); i++){
        arr.push_back(str.substr(i));
    }

    sort(arr.begin(), arr.end());

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << '\n';
    }
    return 0;
}