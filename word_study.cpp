//1157 string
#include<iostream>
#include<string>

using namespace std;

int alpha[26];
int Max;
int idx;
bool flag;

int main(){
    string str;

    cin >> str;

    for(int i = 0; i < str.size(); i++){
        if(str[i] < 'a') alpha[str[i] - 'A']++;
        else alpha[str[i] - 'a']++;
    }

    for(int i = 0; i < 26; i++){
        if(Max < alpha[i]){
            Max = alpha[i];
            idx = i;
        }
    }

    for(int i = 0; i < 26; i++){
        if(alpha[i] == Max && i != idx) flag = true;
    }

    if(flag) cout << '?';
    else cout << (char)(idx + 'A');
    return 0;
}