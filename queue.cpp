//10845 queue
#include<iostream>
#include<deque>

using namespace std;

int main(){
    int n;
    cin >> n;

    deque<int> q;

    for(int i = 0; i < n; i++){
        string str;
        int num;
        cin >> str;

        if(str == "push"){
            cin >> num;
            q.push_back(num);
        }
        else if(str == "front"){
            if(q.empty()) cout << -1 << '\n';
            else cout << q.front() << '\n';
        }
        else if(str == "back"){
            if(q.empty()) cout << -1 << '\n';
            else cout << q.back() << '\n';
        }
        else if(str == "size"){
            cout << q.size() << '\n';
        }
        else if(str == "empty"){
            if(q.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        else if(str == "pop"){
            if(q.empty()) cout << -1 << '\n';
            else{
                cout << q.front() << '\n';
                q.pop_front();
            }
        }
    }
    return 0;
}