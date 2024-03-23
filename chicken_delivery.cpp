//15686 backtracking
#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

int arr[52][52];
vector<pair<int, int> > home, chicken, v;
bool check[13];
int n, m;
int ans = 9999999;

int deli(){
    int sum = 0;
    for(int i = 0; i < home.size(); i++){
        int x = home[i].first;
        int y = home[i].second;
        int dis = 9999999;

        for(int j = 0; j < v.size(); j++){
            int cx = v[j].first;
            int cy = v[j].second;
            int cdis = abs(cx - x) + abs(cy - y);

            dis = min(dis, cdis);
        }
        sum += dis;
    }
    return sum;
}

void back(int idx, int cnt){
    if(cnt == m){
        ans = min(ans, deli());
        return;
    }

    for(int i = idx; i < chicken.size(); i++){
        if(check[i]) continue;
        check[i] = true;
        v.push_back(chicken[i]);
        back(i ,cnt + 1);
        check[i] = false;
        v.pop_back();
    }
}

int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 1){
                home.push_back({i, j});
            }
            if(arr[i][j] == 2){
                chicken.push_back({i, j});
            }
        }
    }

    back(0, 0);
    cout << ans;

    return 0;
}