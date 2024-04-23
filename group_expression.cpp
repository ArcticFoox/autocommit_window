//1717 union_find
#include<iostream>

using namespace std;

int parents[1000001];
int n, m;

int find(int x){
    if(parents[x] == x) return x;
    else return parents[x] = find(parents[x]);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        parents[i] = i;
    }

    for(int i = 0; i < m; i++){
        int type, a, b;
        cin >> type >> a >> b;

        if(!type){
            int pa = find(a);
            int pb = find(b);
            parents[pb] = pa;
        }
        else{
            if(find(a) == find(b)) cout << "YES\n";
            else cout << "NO\n";
        }
    }

    return 0;
}