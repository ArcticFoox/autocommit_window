//1213 parsing
#include<iostream>
#include<string>

using namespace std;

string str, ans;
int alpha[26];

bool check_palindrome(){
    int cnt = 0;
    for(int i = 0; i < 26; i++){
        if(alpha[i] % 2 == 1){
            cnt++;
        }
    }
    return cnt > 1;
}

int main(){
    cin >> str;

    for(int i = 0; i < str.size(); i++) alpha[str[i] - 'A']++;

    if(check_palindrome()){
        cout << "I'm Sorry Hansoo";
        return 0;
    }

    for(int i = 0; i < 26; i++)
        for(int j = 0; j < alpha[i]/2; j++)
            ans += i + 'A';

    for(int i = 0; i < 26; i++)
        if(alpha[i]%2) 
            ans += i + 'A';

    for(int i = 25; i >= 0; i--)
        for(int j = 0; j < alpha[i]/2; j++)
            ans += i + 'A';

    cout << ans;
    return 0;
}