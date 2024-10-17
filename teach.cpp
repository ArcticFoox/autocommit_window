//1062 backtracking
#include<iostream>
#include<string>

using namespace std;

int n, k;
bool alpha[26];
string arr[51];
int Max = 0;

void dfs(int row, int idx){
    int cnt = 0;
    if(row == k - 5){
        for(int i = 0; i < n; i++){
            bool reable = true;

            for(int j = 0; j < arr[i].size(); j++){
                if(!alpha[arr[i][j] - 'a']){
                    reable = false;
                    break;
                }
            }

            if(reable) cnt++;
        }

        Max = max(Max, cnt);
        return;
    }

    for(int i = idx; i < 26; i++){
        if(alpha[i]) continue;
        alpha[i] = true;
        dfs(row+1, i);
        alpha[i] = false;
    }
}

int main(){
    
    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    if(k < 5){
        cout << 0;
        return 0;
    }
    else {
        alpha['a' - 'a'] = true;
        alpha['n' - 'a'] = true;
        alpha['t' - 'a'] = true;
        alpha['i' - 'a'] = true;
        alpha['c' - 'a'] = true;

        dfs(0, 0);

        cout << Max;

    }
    return 0;
}