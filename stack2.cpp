//28278 stack
#include<iostream>
#include<stack>

using namespace std;

stack<int> s;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;

        if(num == 1){
            int x;
            cin >> x;
            s.push(x);

        } else if(num == 2){
            if(!s.empty()){
                cout << s.top() << '\n';
                s.pop();
            }
            else{
                cout << -1 << '\n';
            }
        } else if(num == 3){
            cout << s.size() << '\n';
        } else if(num == 4){
            cout << s.empty() << '\n';
        } else if(num == 5){
            if(!s.empty()){
                cout << s.top() << '\n';
            }
            else{
                cout << -1 << '\n';
            }
        }
    }
    return 0;
}