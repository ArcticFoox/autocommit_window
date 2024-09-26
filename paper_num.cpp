//1780 recursion(div&conquer)
#include<iostream>

using namespace std;

int n;
int arr[2188][2188];
int one, m_one, zero;

void paper(int x, int y, int size){
    bool same = true;
    
    for(int i = y; i < y+size; i++){
        for(int j = x; j < x+size; j++){
            if(arr[i][j] != arr[y][x]){
                same = false;
                break;
            }
        }

        if(!same){
            break;
        }
    }

    if(!same){
        paper(x, y, size / 3); 
        paper(x+size/3, y, size / 3); 
        paper(x+size/3+size/3, y, size / 3); 
        paper(x, y+size/3, size / 3); 
        paper(x, y+size/3+size/3, size / 3); 
        paper(x+size/3, y+size/3, size / 3); 
        paper(x+size/3+size/3, y+size/3+size/3, size / 3); 
        paper(x+size/3, y+size/3+size/3, size / 3); 
        paper(x+size/3+size/3, y+size/3, size / 3); 
    }
    else{
        if(arr[y][x] == 1){
            one++;
        } else if(arr[y][x] == 0){
            zero++;
        }else{
            m_one++;
        }
    }

}

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    paper(0, 0, n);

    cout << m_one << '\n';
    cout << zero << '\n';
    cout << one << '\n';
    return 0;
}