//31797 sort
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int arr[1001][2];
int ans[2002];
int n, m;
vector<int> height;

int main(){
    cin >> n >> m;

    for(int i = 1; i <= m; i++){
        int h1, h2;
        cin >> h1 >> h2;
        arr[i][0] = h1;
        arr[i][1] = h2;
        height.push_back(h1);
        height.push_back(h2);
    }

    sort(height.begin(), height.end());

    for(int j = 0; j < height.size(); j++){
        for(int i = 1; i <= m; i++){
            if(height[j] == arr[i][0] || height[j] == arr[i][1]){
                ans[j + 1] = i;
            }
        }
    }
   

    cout << ans[n % (m * 2) ? n % (m * 2) : m * 2];
    return 0;
}