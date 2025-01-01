//32978 basic
#include<iostream>
#include<map>

using namespace std;

map<string, int> m;

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        m[str]++;
    }

    for(int i = 0; i < n - 1; i++){
        string str;
        cin >> str;
        m[str]++;
    }

    for(auto iter : m){
        if(iter.second == 1) cout << iter.first;
    }
    return 0;
}