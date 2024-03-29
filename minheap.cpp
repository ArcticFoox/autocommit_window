//1927 minheap(priority_queue)
#include<iostream>
#include<queue>

using namespace std;

int n;
priority_queue<int, vector<int>, greater<int>> pq;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;

        if(temp == 0){
            if(pq.empty()){
                cout << 0 << '\n';
            }
            else{
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
        else{
            pq.push(temp);
        }
    }
    return 0;
}