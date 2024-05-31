//9996 string(parsing)
#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cin >> n;

    string str;
    cin >> str;

    string st = "", en = "";

    bool flag = false;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == '*'){
            flag = true;
            continue;
        }

        if(!flag){
            st += str[i];
        }
        else{
            en += str[i];
        }
    }

    for(int i = 0; i < n; i++){
        string word;
        cin >> word;

        if(word.size() < st.size() + en.size()){
            cout << "NE\n";
            continue;
        }

        if(word.substr(0, st.size()) == st && word.substr(word.size() - en.size(), word.size() - 1) == en){
            cout << "DA\n";
        }
        else{
            cout << "NE\n";
        }
    }
    return 0;
}