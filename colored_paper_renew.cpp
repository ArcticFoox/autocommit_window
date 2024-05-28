//2630 review
#include<iostream>

using namespace std;

int arr[128][128];
int n;
int b, w;

void div(int x, int y, int size){
    int check = arr[x][y];
    for(int i = x; i < x + size; i++){
        for(int j = y; j < y + size; j++){
            if(check == 0 && arr[i][j] == 1) check = 2;
            if(check == 1 && arr[i][j] == 0) check = 2;

            if(check == 2){
                div(x, y, size / 2);
                div(x, y + size / 2, size / 2);
                div(x + size / 2, y, size / 2);
                div(x + size / 2, y + size / 2, size / 2);
                return;
            }
        }
    }
    if(check == 0) w++;
    else b++;
}

int main(){
    
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    div(0, 0, n);

    cout << w << '\n' << b;
    return 0;
}