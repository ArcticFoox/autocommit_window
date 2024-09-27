//1992 recursion(div&conquer)
#include<iostream>

using namespace std;

int n;
char arr[65][65];
string ans = "";

void back(int x, int y, int size){
    bool same = true;
    
    for(int i = x; i < x + size; i++){
        for(int j = y; j < y + size; j++){
            if(arr[i][j] != arr[x][y]){
                same = false;
                break;
            }
        }
        if(!same){
            break;
        }
    }

    if(!same){
        ans += '(';
        back(x, y, size / 2);
        back(x, y + size / 2, size / 2);
        back(x + size / 2, y, size / 2);
        back(x + size / 2, y + size / 2, size / 2);
        ans += ')';
    }
    else{
        ans += arr[x][y];
    }
}

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    back(0, 0, n);

    cout << ans;
    return 0;
}