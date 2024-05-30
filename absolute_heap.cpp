//11286 priority_queue(heap)
#include<iostream>
#include<queue>
#include<cmath>

using namespace std;

struct comp {   
    bool operator() (int a, int b){
        if(abs(a) == abs(b)){
            return a > b;
        }
        else
            return abs(a) > abs(b);
    }
};

int main(){
    priority_queue<int, vector<int>, comp > pq;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int cmd;
        cin >> cmd;

        if(cmd == 0){
            if(pq.empty())
                cout << '0' << '\n';
            else{
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
        else{
            pq.push(cmd);
        }
    }

    return 0;
}