//1918 stack
#include<iostream>
#include<stack>

using namespace std;

string ans;
stack<char> s;

int main(){
    string str;
    
    cin >> str;

    for(int i = 0; i < str.size(); i++){
        if('A' <= str[i] && str[i] <= 'Z'){
            ans += str[i];
        }
        else{
            if(str[i] == '(') s.push(str[i]);
            else if(str[i] == ')'){
                while(!s.empty() && s.top() != '('){
                    ans += s.top();
                    s.pop();
                }
                s.pop();
            }
            else if(str[i] == '*' || str[i] == '/'){
                while(!s.empty() && (s.top() == '*' || s.top() == '/')){
                    ans += s.top();
                    s.pop();
                }
                s.push(str[i]);
            }

            else if(str[i] == '+' || str[i] == '-'){
                while(!s.empty() && s.top() != '('){
                    ans += s.top();
                    s.pop();
                }
                s.push(str[i]);            
            }
        }
    }

    while(!s.empty()){
        ans += s.top();
        s.pop();
    }

    cout << ans;
    return 0;
}