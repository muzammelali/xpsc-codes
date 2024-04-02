#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, q;
        cin >> n >> k >> q;

        ll ans = 0;
        ll r = 0;

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;

            if (x <= q)
            {
                r++;
                if (r >= k)
                {
                    ans += r - k + 1;
                }
            }
            else
            {
                r = 0;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
