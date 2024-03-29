#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    ll k;
    cin >> n >> k;

    vector<ll> a(n);
    
    for (int i = 0;i < n;i++)
    {
        cin >> a[i];
    }

    ll l = 0, r = 0, ans = 0;
    
    map <ll,ll> mp;
    while(r<n)
    {
        mp[a[r]]++;
        while(mp.size() > k)
        {
            mp[a[l]]--;
            if(mp[a[l]] == 0)
                mp.erase(a[l]);
            l++;
        }
        ans += (r-l+1);
        r++;
    }
    cout << ans << endl;
    return 0;
}