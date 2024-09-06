//11279 heap(priority_queue)
#include<iostream>
#include<queue>
#include<vector>

using namespace std;

priority_queue<int> pq;
vector<int> v;

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;

        if(num == 0){
            if(pq.empty()){
                v.push_back(0);
                continue;
            }
            v.push_back(pq.top());
            pq.pop();
        }
        else{
            pq.push(num);
        }
    }

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << '\n';
    }
    return 0;
}