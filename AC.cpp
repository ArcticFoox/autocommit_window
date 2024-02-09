//5430 string_parsing
#include<iostream>
#include<deque>
#include<string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--){
        string p, x, num;
        int n;
        deque<int> dq;
        bool reverse = false;
        bool is_error = false;
        cin >> p;
        cin >> n;
        cin >> x;
        for(int i = 0; i < x.size(); i++){
            if(isdigit(x[i])) num += x[i];
            else{
                if(!num.empty()){
                    dq.push_back(stoi(num));
                    num.clear();
                }
            }
        }

        for(int i = 0; i < p.size(); i++){
            if(p[i] == 'R') reverse = !reverse;
            else{
                if(dq.empty()){
                    cout << "error\n";
                    is_error = true;
                    break;
                }
                else{
                    if(reverse) dq.pop_back();
                    else dq.pop_front();
                }
            }
        }
        if(!is_error){
            cout << "[";
            while (!dq.empty())
            {
                if (!reverse)
                {
                    cout << dq.front();
                    dq.pop_front();
                }
                else
                {
                    cout << dq.back();
                    dq.pop_back();
                }
                if (!dq.empty())
                {
                    cout << ',';
                }
            }
            cout << "]" << '\n';
        }
    }
    return 0;
}