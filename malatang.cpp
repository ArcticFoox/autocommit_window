//31923 math(brute-force)
#include<iostream>

using namespace std;

int arr[101][2];
int ans[101];
bool visit[101];
int cnt;

int main(){
    int n, a, b;
    cin >> n >> a >> b;

    for(int i = 0; i < n; i++){
        cin >> arr[i][0];
    }

    for(int i = 0; i < n; i++){
        cin >> arr[i][1];
    }

    for(int i = 0; i <= 10000; i++){
        for(int j = 0; j < n; j++){
            if(arr[j][0] + a * i == arr[j][1] + b * i){
                if(!visit[j]){
                    visit[j] = true;
                    cnt++;
                    ans[j] = i;
                }
            }
        }
    }

    if(cnt == n){
        cout << "YES\n";
        for(int i = 0; i < n; i++){
            cout << ans[i] << ' ';
        }
    }
    else{
        cout << "NO";
    }
    return 0;
}