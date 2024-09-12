//1655 priority_queue
#include<iostream>
#include<queue>

using namespace std;

priority_queue<int, vector<int>, greater<int>> min_pq;
priority_queue<int, vector<int>, less<int>> max_pq;
vector<int> v;

int main(){
    
    int n;
    cin >> n;

    int num;
    cin >> num;

    int mid = num;
    v.push_back(mid);

    for(int i = 1; i < n; i++){
        cin >> num;

        if(mid > num){
            max_pq.push(num);
        }
        else{
            min_pq.push(num);
        }


        if(min_pq.size() - max_pq.size() == 2){
            max_pq.push(mid);
            mid = min_pq.top();
            min_pq.pop();
        }
        else if(min_pq.size() - max_pq.size() == -1){
            min_pq.push(mid);
            mid = max_pq.top();
            max_pq.pop();
        }

        v.push_back(mid);
    }


    for(int i : v){
        cout << i << '\n';
    }
    return 0;
}