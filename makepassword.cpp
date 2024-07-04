//1759 backtracking
#include<iostream>
#include<algorithm>

using namespace std;

int l, c;
char arr[15];
string ans;

void back(int idx, int cnt){
    if(cnt == l){
        int g_cnt = 0;
        int c_cnt = 0;
        for(int i = 0; i < l; i++){
            if(ans[i] == 'a' || ans[i] == 'e' || ans[i] == 'i' || ans[i] == 'o' || ans[i] == 'u'){
                g_cnt++;
            }
            else{
                c_cnt++;
            }
        }

        if(g_cnt >= 1 && c_cnt >= 2){
            cout << ans << '\n';
        }
        return;
    }

    for(int i = idx; i < c; i++){
        ans.push_back(arr[i]);
        back(idx+1, cnt+1);
        ans.pop_back();
    }
}

int main(){
    cin >> l >> c;

    for(int i = 0; i < c; i++){
        cin >> arr[i];
    }

    sort(arr, arr+c);

    back(0, 0);

    return 0;
}