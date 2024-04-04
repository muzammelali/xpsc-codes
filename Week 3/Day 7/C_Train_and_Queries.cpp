#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,q;
        cin >> n >> q;

        map<ll,pair<ll,ll>> mp;

        for(ll i=1;i<=n;i++)
        {
            ll x;
            cin >> x;
            if(!mp.count(x))
            {
                mp[x].first = i;
                mp[x].second = i;
            }
            else
            {
                mp[x].second = i;
            }
        }

        for(ll i=0;i<q;i++)
        {
            ll a,b;
            cin >> a >> b;
            if(mp[a].first == 0 || mp[b].first == 0) 
            {
                cout << "NO" << endl;
                continue;
            }
            if(!mp.count(a) || !mp.count(b) || mp[a].first > mp[b].second) cout << "NO" << endl;
            else cout << "YES" << endl;
        }

    }
    return 0;
}