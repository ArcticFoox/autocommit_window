//11866 queue
#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<int> q;

    int n, k;
    cin >> n >> k;

    for(int i = 1; i <= n; i++){
        q.push(i);
    }
    int cnt = 1;
    cout << '<';
    while(!q.empty()){
        for(int i = 1; i < k; i++){
            q.push(q.front());
            q.pop();
        }
        cout << q.front();
        if(q.size() != 1) cout << ", ";
        q.pop();
    }
    cout << ">";
    return 0;
}