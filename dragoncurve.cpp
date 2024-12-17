//15685 implementation
#include <iostream>
#include <vector>
#define MAX 101

using namespace std;

int N;
int x, y, d, g, cnt;
int map[MAX][MAX];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, -1, 0, 1 };
vector<int> direction;

void Make_Dragon_Curve(){
    int size = direction.size();
    for(int i = size - 1; i >= 0; i--){
        int temp = (direction.at(i) + 1) % 4;
        x += dx[temp];
        y += dy[temp];
        map[x][y] = 1;
        direction.push_back(temp);
    }
}

void Count_Square(){
    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            if(map[i][j] == 1 && map[i][j + 1] == 1 && map[i + 1][j + 1] && map[i + 1][j] == 1)
                cnt++;
        }
    }
}

int main(){
    cin >> N;

    while(N--){
        direction.clear();
        cin >> x >> y >> d >> g;

        // initialize
        map[x][y] = 1;

        // generation 0
        x += dx[d];
        y += dy[d];
        map[x][y] = 1;
        direction.push_back(d);

        // next 'g' generations
        while(g--){
            Make_Dragon_Curve();
        }
    }

    Count_Square();
    cout << cnt;
    return 0;
}