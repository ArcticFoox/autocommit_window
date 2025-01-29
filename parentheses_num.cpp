//2504 stack
#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<char> s;
    string str;
    bool flag = false;
    int sum = 0;
    int tmp = 1;

    cin >> str;

    for(int i = 0; i < str.size(); i++){
        
        if(str[i] == '('){
            tmp *= 2;
            s.push(str[i]);
        }

        else if(str[i] == '['){
            tmp *= 3;
            s.push(str[i]);
        }

        else if(str[i] == ')'){
            if(s.empty() || s.top() != '('){
                sum = 0;
                break;
            }

            else if(str[i-1] == '('){
                sum += tmp;
                tmp /= 2;
                s.pop();
            }
            else{ 
                tmp /= 2;
                s.pop();
            }
        }

        else if(str[i] == ']'){
            if(s.empty() || s.top() != '['){
                sum = 0;
                break;
            }

            else if(str[i-1] == '['){
                sum += tmp;
                tmp /= 3;
                s.pop();
            }
            else{ 
                tmp /= 3;
                s.pop();
            }
        }
    }

    if(!s.empty()) sum = 0;

    cout << sum;

    return 0;
}