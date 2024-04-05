#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        ll sum = 0;

        for (ll i = 0; i < n; ++i)
        {
            cin >> a[i];
            if (a[i] < 0) sum += (-a[i]);
            else sum += a[i];
        }

        ll cnt = 0;
        for (ll i = 0; i < n;)
        {
            ll j = i + 1;
            if (a[i] < 0)
            {
                if (j == n)
                {
                    ++cnt;
                    break;
                }
                while (a[j] < 0 || a[j] == 0)
                {
                    ++j;
                    if (j == n) break;
                }
                ++cnt;
            }
            i = j;
        }

        cout << sum << " " << cnt << endl;
    }
    return 0;
}
