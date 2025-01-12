//2891 greedy
#include<iostream>

using namespace std;

int n, s, r;
int team[11];
int num, ans;

int main(){
    //여분 카약 존재 시 양 옆에 제공 가능
    //카약 손상 시 여분 우선 이후 옆 확인

    cin >> n >> s >> r;

    for(int i = 1; i <= n; i++){
        team[i]++;
    }

    for(int i = 0; i < s; i++){
        cin >> num;
        team[num]--;
    }

    for(int i = 0; i < r; i++){
        cin >> num;
        team[num]++;
    }

    for(int i = 1; i <= n; i++){
        if(!team[i]){
            if(team[i - 1] == 2){
                team[i - 1]--;
                continue;
            } else if(team[i + 1] == 2){
                team[i + 1]--;
                continue;
            }

            ans++;
        }
    }

    cout << ans;

    return 0;
}