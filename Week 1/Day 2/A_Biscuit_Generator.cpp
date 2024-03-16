#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,total=0;
    cin >> a >> b >> c;

    while(c>=a)
    {
        total += b;
        c -= a;
    }

    cout << total;
    return 0;
}