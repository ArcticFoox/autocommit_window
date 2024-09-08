//1021 deque
#include<iostream>
#include<queue>

using namespace std;

deque<int> dq;

int main(){
    
    int n, m, cnt = 0;

    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        dq.push_back(i);
    }

    int input, idx;

    for(int i = 0; i < m; i++){

        cin >> input;

        for(int j = 0; j < dq.size(); j++){
            if(dq[j] == input){
                idx = j;
                break;
            }
        }

        while(true){
            if(dq.empty()) break;

            if(dq.front() == input){
                dq.pop_front();
                break;
            }
            else{
                if(idx < dq.size() - idx){
                    cnt++;
                    dq.push_back(dq.front());
                    dq.pop_front();
                }
                else{
                    cnt++;
                    dq.push_front(dq.back());
                    dq.pop_back();
                }
            }

        }
    }

    cout << cnt;
    return 0;
}