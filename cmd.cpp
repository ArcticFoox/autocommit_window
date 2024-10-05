//1032 string
#include<iostream>

using namespace std;

int main(){
    int n;
    
    cin >> n;

    string ans;
    cin >> ans;

    for(int i = 0; i < n - 1; i++){
        string str;
        cin >> str;

        for(int j = 0; j < ans.size(); j++){
            if(ans[j] != str[j]) ans[j] = '?';
        }
    }

    cout << ans;
    return 0;
}