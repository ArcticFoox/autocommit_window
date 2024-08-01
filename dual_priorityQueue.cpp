//7662 priority_queue
#include<iostream>
#include<queue>
#include<algorithm>
#include<map>

using namespace std;

priority_queue<int, vector<int>, less<int>> maxpq;
priority_queue<int, vector<int>, greater<int>> minpq;
map<int, int> cnt;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){

        while(!maxpq.empty()){
            maxpq.pop();
        }

        while(!minpq.empty()){
            minpq.pop();
        }

        cnt.clear();

        int n;
        cin >> n;
        
        for(int i = 0; i < n; i++){
            char input;
            int num;
            cin >> input >> num;

            if(input == 'I'){
                maxpq.push(num);
                minpq.push(num);
                cnt[num]++;
            }

            else if(input == 'D'){
                if(num == 1){
                    while(!maxpq.empty() && !cnt[maxpq.top()]){
                        maxpq.pop();
                    }

                    if(maxpq.empty()) continue;
                    cnt[maxpq.top()]--;
                    maxpq.pop();
                }
                else if(num == -1){
                    while(!minpq.empty() && !cnt[minpq.top()]){
                        minpq.pop();
                    }

                    if(minpq.empty()) continue;
                    cnt[minpq.top()]--;
                    minpq.pop();
                }
            }
        }

        while(!maxpq.empty() && !cnt[maxpq.top()]){
            maxpq.pop();
        }

        while(!minpq.empty() && !cnt[minpq.top()]){
            minpq.pop();
        }

        if(maxpq.empty() || minpq.empty()){ 
            cout << "EMPTY\n";
        }
        else{
            cout << maxpq.top() << " " << minpq.top() << '\n';
        }
    }

    return 0;
}