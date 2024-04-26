//10828 stack
#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int> s;

    int n; 
    cin >> n;

    for(int i = 0; i < n; i++){
        string str;
        int num;
        cin >> str;
        if(str == "push"){
            cin >> num;
            s.push(num);
        }
        else if(str == "top"){
            if(s.empty()) cout << -1 << '\n';
            else cout << s.top() << '\n';
        }
        else if(str == "size"){
            cout << s.size() << '\n';
        }
        else if(str == "empty"){
            if(s.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        else if(str == "pop"){
            if(s.empty()) cout << -1 << '\n';
            else{
                cout << s.top() << '\n';
                s.pop();
            }
        }
    }    
    return 0;
}