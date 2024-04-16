#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        for(int i=31;i>=0;i--)
        {
            if(n&(1<<i))
            {
                cout << ((1<<i)-1) << endl;
                break;
            }
        }
    }
    return 0;
}