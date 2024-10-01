//2447 recursion(div&conquer)
#include<iostream>

using namespace std;

void star(int x, int y, int size){
    if((x / size) % 3 == 1 && (y / size) % 3 == 1){
        cout << ' ';
    }
    else{
        if(size / 3 == 0) cout << '*';
        else star(x, y, size / 3);
    }
}

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            star(i, j, n);
        }
        cout << '\n';
    }
    return 0;
}