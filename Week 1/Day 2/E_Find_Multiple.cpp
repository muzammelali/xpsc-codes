#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;

    int result = 0;
    for(int i=a;i<=b;i++)
    {
        if(i%c == 0)
        {
            result = i;
            break;
        }
    }

    if(result) cout << result;
    else cout << -1;
    return 0;
}