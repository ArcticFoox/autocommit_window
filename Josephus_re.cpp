//1158 queue
#include<iostream>
#include<queue>

using namespace std;

queue<int> q;

int main(){
    int n, k;
    cin >> n >> k;

    for(int i = 1; i <= n; i++){
        q.push(i);
    }

    int cnt = 0;
    cout << '<';
    while(!q.empty()){
        int tmp = q.front();
        q.pop();

        cnt++;

        if(cnt % k == 0){
            if(cnt / k == n){
                cout << tmp;
            }
            else{
                cout << tmp << ", ";
            }
            continue;
        }
        
        q.push(tmp);
        
    }
    cout << '>';
    return 0;
}