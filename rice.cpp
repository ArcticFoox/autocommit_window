//23559 greedy
#include<iostream>
#include<algorithm>

using namespace std;

int n, x;
pair<int, int> menu[100001];

int main(){
    cin >> n >> x;
    int sum = 0;

    for(int i = 0; i < n; i++){
        cin >> menu[i].first >> menu[i].second;
        sum += menu[i].second;
        x -= 1000;
    }

    sort(menu, menu+n, [](const pair<int, int> a, const pair<int, int> b){
        return abs(a.first - a.second) > abs(b.first - b.second);
    });

    for(int i = 0; i < n; i++){
        if(x >= 4000 && menu[i].first - menu[i].second >= 0){
            x -= 4000;
            sum += menu[i].first - menu[i].second;
        }
    }
    cout << sum;
    return 0;
}