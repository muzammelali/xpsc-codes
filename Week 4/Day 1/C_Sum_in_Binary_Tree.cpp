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
        ll ans=n;

        while(n)
        {
            ans += n/2;
            n /= 2;
        }

        cout << ans << endl;
    }
    return 0;
}