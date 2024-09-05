//10799 stack
#include<iostream>
#include<stack>

using namespace std;

stack<char> s;

int main(){
    string str;
    cin >> str;

    int cnt = 0;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == '('){
            s.push(str[i]);
        }
        else{
            if(str[i - 1] == '('){
                s.pop();
                cnt += s.size();
            }
            else{
                s.pop();
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}