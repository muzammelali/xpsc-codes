#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, ans = 0;
        cin >> n;

        set<ll> st;

        ll a[n];

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        reverse(a, a + n);
        for (ll i = 0; i < n; i++)
        {
            if (st.find(a[i]) != st.end()) break;
            st.insert(a[i]);
            ++ans;
        }
        cout << n-ans << endl;
    }
    return 0;
}