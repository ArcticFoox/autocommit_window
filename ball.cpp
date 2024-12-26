//1547 basic
#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int m, a, b;
    cin >> m;
 
    int ball[] = {0, 1, 0, 0};
 
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        swap(ball[a], ball[b]);
    }
 
    for (int i = 1; i < 4; i++) {
        if (ball[i] == 1) cout << i;
    }
 
    return 0;
}