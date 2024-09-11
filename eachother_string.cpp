//11478 set(string)
#include<iostream>
#include<set>
#include<string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    set<string> s;
    string str;

    cin >> str;

    string tmp = "";

    for(int i = 0; i < str.size(); i++){
        for(int j = i; j < str.size(); j++){
            tmp += str[j];
            s.insert(tmp);
        }
        tmp = "";
    }
    
    cout << s.size();
    return 0;
}