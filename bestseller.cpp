//1302 map
#include<iostream>
#include<map>

using namespace std;

map<string, int> book;

int main(){
    int max = 0;
    string ans;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string str;
        cin >> str;

        book[str]++;
    }

    for(auto& i : book){
        if(i.second > max){
            ans = i.first;
            max = i.second;
        }
    }

    cout << ans;
    return 0;
}