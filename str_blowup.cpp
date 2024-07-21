//9935 string_and_stack
#include<iostream>
#include<stack>

using namespace std;

int main(){
    string ans;
    string str;
    cin >> str;

    string boom;
    cin >> boom;

    for(int i = 0; i < str.size(); i++){
        ans += str[i];
        if(ans.size() >= boom.size()){
            bool flag = false;
            for(int j = 0; j < boom.size(); j++){
                if(ans[ans.size() - boom.size() + j] != boom[j]){
                    flag = true;
                    break;
                }
            }

            if(!flag){
                ans.erase(ans.end() - boom.size(), ans.end());
            }
        }
    }

    if(ans == ""){
        ans = "FRULA";
    }

    cout << ans;

    return 0;
}