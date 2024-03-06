//1406 stack
#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<char> st, en;
    string str;

    cin >> str;

    for(int i = 0; i < str.size(); i++){
        st.push(str[i]);
    }
    
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        char t;
        cin >> t;

        if(t == 'L'){
            if(st.empty()) continue;
            en.push(st.top());
            st.pop();
        }
        else if(t == 'D'){
            if(en.empty()) continue;
            st.push(en.top());
            en.pop();
        }
        else if(t == 'B'){
            if(st.empty()) continue;
            st.pop();
        }
        else if(t == 'P'){
            char x;
            cin >> x;
            st.push(x);
        }
    }

    while(!st.empty()){
        en.push(st.top());
        st.pop();
    }

    while(!en.empty()){
        cout << en.top();
        en.pop();
    }

    return 0;
}