//1259 reverse
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    while(true){
        string str;
        cin >> str;

        if(str == "0") break;

        string tmp = str;
        reverse(tmp.begin(), tmp.end());
        if(str == tmp) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}