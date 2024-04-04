//23559 greedy
#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;

int n, m;
int sum;
pair<int, int> s[200005];
priority_queue<int> pq;

int main(){
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> s[i].first >> s[i].second;
        sum += s[i].second;
        m -= 1000;
        if(s[i].first > s[i].second)
            pq.push(s[i].first - s[i].second);
    }

    while (m >= 4000 && !pq.empty()){
        sum += pq.top();
        m -= 4000;
        pq.pop();
    }
    
    cout << sum;
    return 0;
}