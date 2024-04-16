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
        vector<ll> v(n);
        ll orSum =0;
        for(auto &it:v)
        {
            cin >> it;
            orSum |= it;
        }
        cout << orSum << endl;
    }
    return 0;
}