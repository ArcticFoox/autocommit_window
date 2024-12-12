//13549 priority_queue
#include<iostream>
#include<queue>

using namespace std;

int n, k;
int cnt;
bool visited[100001];
int time, x;

int main(){
    cin >> n >> k;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    
    q.push({0, n});
    visited[n] = true;

    while(!q.empty()){
        time = q.top().first;
        x = q.top().second;
        q.pop();

        if(x < 0 || x > 100000) continue;        
        
        if(x == k){                                
            cout << time;
            break;
        }

        if(x * 2 <= 100000 && !visited[x * 2]){
            visited[x * 2] = true;
            q.push({time, x * 2});
        }
        if(x - 1 >= 0 && !visited[x - 1]){
            visited[x - 1] = true;
            q.push({time + 1, x - 1});
        }
        if(x + 1 <= 100000 && !visited[x + 1]){
            visited[x + 1] = true;
            q.push({time + 1, x + 1});
        }
    }

    return 0;
}