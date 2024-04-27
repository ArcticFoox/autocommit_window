//1181 sort_compare
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

string arr[20001];

bool comp(string a, string b){
    if(a.size() == b.size()){
        return a < b;
    }
    return a.size() < b.size();
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; 
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n, comp);

    for(int i = 0; i < n; i++){
        if(arr[i] == arr[i - 1]) continue;
        cout << arr[i] << '\n';
    }
    return 0;
}