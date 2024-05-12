//1966 queue
#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;



int main(){
    int t;
    cin >> t;
    while(t--){
        int n, idx;
        queue<pair<int, int> > q;
        priority_queue<int> pq;
        cin >> n >> idx;

        for(int i = 0; i < n; i++){
            int p;
            cin >> p;
            q.push({p, i});
            pq.push(p);
        }

        int cnt = 0;
        while(!pq.empty()){
            int c = q.front().first;
            int c_idx = q.front().second;
            q.pop();
            if(c == pq.top()){
                pq.pop();
                cnt++;
                if(c_idx == idx){
                    cout << cnt << '\n';
                    break;
                }
            }
            else q.push({c, c_idx});
        }
    }
    
    return 0;
}