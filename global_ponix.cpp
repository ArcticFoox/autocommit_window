//31775 string
#include<iostream>

using namespace std;
//10
string alpha[6] = {"lkp", "lpk", "kpl", "klp", "pkl", "plk"};

int main(){
    string ans = "";
    bool flag = false;
    for(int i = 0; i < 3; i++){
        string str;
        cin >> str;

        ans += str[0];
    }    

    for(int i = 0; i < 6; i++){
        if(ans == alpha[i]) flag = true;
    }

    if(flag) cout << "GLOBAL";
    else cout << "PONIX";
    return 0;
}