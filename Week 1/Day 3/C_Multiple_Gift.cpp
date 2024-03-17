#include <bits/stdc++.h>
using namespace std;
int main(){
    long long x,y,cnt=1;
    cin >> x >> y;

    while(x*2<=y)
    {
        x *= 2;
        cnt++;
    }
    cout << cnt;
    return 0;
}