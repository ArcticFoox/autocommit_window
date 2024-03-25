//12605 string_stack
#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(){
    int n;
    cin >> n;

    cin.ignore();
    
    for(int i = 0; i < n; i++){
        string ans;
        stack<string> s;
        string str;

        getline(cin, str);

        string st = "";
        for(int j = 0; j <= str.size(); j++){
            if(str[j] == ' ' || j == str.size()){
                s.push(st);
                st = "";
            }
            else{
                st += str[j];
            }
        }
        cout << "Case #" << i + 1 << ": ";
        while(!s.empty()){
            ans += s.top();
            s.pop();

            if(!s.empty()) ans += " ";
        }
        cout << ans << '\n';
    }
    return 0;
}