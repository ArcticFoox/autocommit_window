//2108 math
#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

int arr[500001];
int cnt[8001];
int n, v_cnt;
vector<int> v;
double sum;

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        arr[i] = num;
        sum += num;
        cnt[num + 4000]++;
    }

    sort(arr, arr+n);

    for(int i = 0; i < 8001; i++){
        if(cnt[i] > v_cnt){
            v.clear();
            v_cnt = cnt[i];
            v.push_back(i - 4000);
        }
        else if(cnt[i] == v_cnt){
            v.push_back(i - 4000);
        }
    }

    cout << round(sum / n) + 0.0 << '\n';
    cout << arr[n / 2] << '\n';
    cout << (v.size() == 1 ? v.front() : v[1]) << '\n';
    cout << arr[n - 1] - arr[0];
    return 0;
}