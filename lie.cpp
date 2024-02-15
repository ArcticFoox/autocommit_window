//1043 graph_unionfind
#include<iostream>
#include<vector>

using namespace std;

int n, m, k;
int parents[51];
vector<int> truth;
vector<vector<int> > v(50);

int Find(int x){
    if(parents[x] == x) return x;
    return x = Find(parents[x]);
}

void Union(int x, int y){
    x = Find(x);
    y = Find(y);
    parents[x] = y;
}

int main(){
    cin >> n >> m >> k;
    
    for(int i = 0; i < k; i++){
        int num;
        cin >> num;
        truth.push_back(num);
    }

    for(int i = 1; i <= n; i++) parents[i] = i;

    for(int i = 0; i < m; i++){
        int p;
        cin >> p;
        int num;
        int prev;
        for(int j = 0; j < p; j++){
            if(j >= 1){
                prev = num;
                cin >> num;
                Union(prev, num);
            }
            else{
                cin >> num;
            }
            v[i].push_back(num);
        }
    }

    for(auto& list : v){
        bool flag = false;
        for(auto& person : list){
            if(flag) break;
            for(auto& t : truth){
                if(Find(person) == Find(t)){
                    flag = true;
                    break;
                }
            }
        }
        if(flag) m--;
    }
    cout << m;
    return 0;
}