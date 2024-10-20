//16922 backtracking
#include<iostream>

using namespace std;

int roma[4] = {1, 5, 10, 50};
bool visited[1001];
int n, ans;

void back(int row, int idx, int total){
    if(row == n){
        if(!visited[total]){
            visited[total] = true;
            ans++;
        }
        return;
    }

    for(int i = idx; i < 4; i++){
        back(row+1, i, total+roma[i]);
    }
}

int main(){
    cin >> n;

    back(0, 0, 0);

    cout << ans;

    return 0;
}