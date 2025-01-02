//20055 implementation(pointer)
#include<iostream>

using namespace std;

int n, k;
int belt[201];
bool robot[202];
int st = 0;
int en;
int init;
int result;
int cnt;
bool stop = false;

void rotation(){
    if(st == 0) st = 2 * n - 1;
    else st--;

    if(en == 0) en = 2 * n - 1;
    else en--;

    if(robot[en]) robot[en] = false;
}

void move_robot(){
    if(init != -1){
        int idx = en;
        
        for(int i = 0; i < n-1; i++){
            int next = idx;
            if(idx == 0) idx = 2 * n - 1;
            else idx--;

            if(!robot[next] && robot[idx] && belt[next] > 0){
                belt[next] -= 1;
                
                if(belt[next] == 0){
                    cnt++;
                    if(cnt >= k){
                        stop = true;
                        break;
                    }
                }

                robot[next] = true;
                robot[idx] = false;
            }
        }

        robot[en] = false;
    }
}

void put_robot(){
    if(belt[st] > 0){
        belt[st] -= 1;
        
        if(belt[st] == 0){
            cnt++;
            if(cnt >= k) stop = true;
        }
        
        robot[st] = true;
        init = 0;
    }
}

int main(){
    cin >> n >> k;
    int tmp;
    for(int i = 0; i < 2 * n; i++){
        cin >> belt[i];
    }
    en = n - 1;

    while(!stop){
        rotation();
        move_robot();
        put_robot();
        if(stop) break;
        result++;
    }
    
    cout << result;
    return 0;
}