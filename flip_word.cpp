//17413 string_stack
#include <iostream>
#include <stack>
#include <string>

using namespace std;

void stackprint(stack<char> &stack){
    while(!stack.empty()){
        cout<<stack.top();
        stack.pop();
    }
}

int main(){
    stack<char> stack;
    string str;
    getline(cin,str);
    for(int i=0;i<str.size();i++){
        if(str[i]=='<'){
            stackprint(stack);
            while(true){
                cout<<str[i];
                if(str[i]=='>') break;
                i++;
            }
        }
        else if(str[i]==' '){
           stackprint(stack);
            cout<<" ";
        }
        else{
            stack.push(str[i]);
        }
    }
    stackprint(stack);
}