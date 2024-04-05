#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n), b(n), c(n);

        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;
        for(auto &x : c) cin >> x;

        set<pair<ll,ll>> p, q;

        for(ll i = 0; i < n; ++i)
        {
            p.insert({b[i], i});
            q.insert({c[i], i});
        }

        ll ans = 0;
        for(ll i = 0; i < n; ++i)
        {
            p.erase({b[i], i});
            q.erase({c[i], i});

            auto y1 = *prev(p.end());
            auto y2 = *prev(prev(p.end()));
            auto z1 = *prev(q.end());
            auto z2 = *prev(prev(q.end()));

            if(y1.second == z1.second)
                ans = max(ans, max(a[i] + y1.first + z2.first, a[i] + y2.first + z1.first));
            else
                ans = max(ans, a[i] + y1.first + z1.first);

            p.insert({b[i], i});
            q.insert({c[i], i});
        }

        cout << ans << endl;
    }
    return 0;
}
