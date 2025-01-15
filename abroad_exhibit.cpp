//2789 basic
#include<iostream>

using namespace std;

int main(){
    string word = "CAMBRIDGE";
    string str;
    cin >> str;

    for(int i = 0; i < str.size(); i++){
        bool flag = false;
        for(int j = 0; j < word.size(); j++){
            if(str[i] == word[j]){
                flag = true;
                break;
            }
        }

        if(!flag) cout << str[i];
    }
    return 0;
}