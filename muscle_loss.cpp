//18429 backtracking
#include<iostream>

using namespace std;

int n, k;
int cnt;
int arr[9];
bool visited[9];

void back(int weight, int target){
    if(target == n - 1){
        if(weight < 500) return;
        else{
            cnt++;
            return;
        }
    }

    for(int i = 0; i < n; i++){
        if(!visited[i] && weight+arr[i]-k >= 500){
            visited[i] = true;
            back(weight + arr[i] - k, target+1);
            visited[i] = false;
        }
    }
}

int main(){
    cin >> n >> k;

    for(int i = 0; i < n; i++) cin >> arr[i];

    back(500, 0);

    cout << cnt;
    return 0;
}