//1874 stack
#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main(){
    stack<int> s;
    vector<char> ans;
    int n, cnt = 1;
    cin >> n;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;

        while(cnt <= num){
            s.push(cnt);
            cnt++;
            ans.push_back('+');
        }

        if(s.top() == num){
            s.pop();
            ans.push_back('-');
        }
        else{
            cout << "NO";
            return 0;
        }
    }

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << '\n';
    }
    return 0;
}