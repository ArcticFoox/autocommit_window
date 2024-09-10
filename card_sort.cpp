//1715 greedy(priority_queue)
#include<iostream>
#include<queue>

using namespace std;

priority_queue<int, vector<int>, greater<int>> pq; 

int main(){
    int n, num;
    long long ans = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> num;
        pq.push(num);
    }


    if(n == 1){
        cout << 0;
    }
    else{
        while(!pq.empty()){
            int tmp = 0;
            tmp += pq.top();
            pq.pop();
            if(!pq.empty()){
                tmp += pq.top();
                pq.pop();
                if(!pq.empty()){
                    pq.push(tmp);
                }
            }
            ans += tmp;
        }

        cout << ans;
    }
    
    return 0;
}