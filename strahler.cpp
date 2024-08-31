//9470 topological_sort
#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int k, m, p;
        cin >> k >> m >> p;

        int inhole[1002] = {0, };
        vector<int> v[1002];
        priority_queue<int> pq[1002];

        for(int i = 0; i < p; i++){
            int a, b;
            cin >> a >> b;
            v[a].push_back(b);
            inhole[b]++;
        }

        queue<pair<int, int>> q;
        for(int i = 1; i <= m; i++){
            if(inhole[i] == 0) q.push({i, 1});
        }

        while(!q.empty()){
            int str = q.front().first;
            int step = q.front().second;
            q.pop();

            if(str == m){
                cout << k << ' ' << step << '\n';
                break;
            }

            for(int i = 0; i < v[str].size(); i++){
                int idx = v[str][i];
                inhole[idx]--;
                pq[idx].push(step);

                if(inhole[idx] == 0){
                    step = pq[idx].top();
                    pq[idx].pop();

                    if(!pq[idx].empty() && step == pq[idx].top()) step++;
                    q.push({idx, step});
                }
            }
        }
    }
    return 0;
}