//2630 div&cquer
#include<iostream>

using namespace std;

int n;
int paper[128][128];
int blue, white;

void solve(int x, int y, int size){
    int check = paper[x][y];
    for(int i = x; i < x + size; i++){
        for(int j = y; j < y + size; j++){
            if(check == 0 && paper[i][j] == 1) check = 2;
            else if(check == 1 && paper[i][j] == 0) check = 2;

            if(check == 2){
                solve(x, y, size / 2);
                solve(x, y + size / 2, size / 2);
                solve(x + size / 2, y, size / 2);
                solve(x + size / 2, y + size / 2, size / 2);
                return;
            }
        }
    }
    if(check == 0) white++;
    else blue++;
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> paper[i][j];
        }
    }
    solve(0, 0, n);
    cout << white << '\n';
    cout << blue << '\n';
    return 0;
}