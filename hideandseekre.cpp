//1697 bfs
#include<iostream>
#include<queue>

using namespace std;

int n, k;
int cnt;
int arr[100001];
int temp;

int main(){
    cin >> n >> k;

    queue<int> q;

    q.push(n);

    while(!q.empty()){
        temp = q.front();
        q.pop();

        if(temp < 0 || temp > 100000) continue;        
        if(temp == k){                                
            cout << arr[temp];
            break;
        }

        if(temp - 1 >= 0 && !arr[temp - 1]){
            arr[temp - 1] = arr[temp] + 1;
            q.push(temp - 1);
        }
        if(temp + 1 <= 100000 && !arr[temp + 1]){
            arr[temp + 1] = arr[temp] + 1;
            q.push(temp + 1);
        }
        if(temp * 2 <= 100000 && !arr[temp * 2]){
            arr[temp * 2] = arr[temp] + 1;
            q.push(temp * 2);
        }
    }

    return 0;
}