//31561 math
#include<iostream>

using namespace std;

int main(){
    float m;
    cin >> m;

    if(m <= 30.0)
        printf("%.1f", m / 2);
    else
        printf("%.1f", (m - 30) * (3.0 / 2.0) + 15.0);

    return 0;
}