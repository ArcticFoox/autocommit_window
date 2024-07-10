//19637 binarysearch
#include<iostream>

using namespace std;

int n, m;
string name[100001];
int ack[100001];

int binsearch(int target){
    int st = 0, en = n - 1;
    int mid = 0;
    while(st <= en){
        mid = (st+en)/2;
        if(ack[mid] < target) st = mid+1;
        else en = mid-1;
    }
    if(target > ack[mid]) return mid+1;
    else return mid;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> name[i] >> ack[i];
    }

    for(int i = 0; i < m; i++){
        int num;
        cin >> num;
        cout << name[binsearch(num)] << '\n';
    }

    return 0;
}