#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n;

        map<ll,ll> mp;

        for(int i=0;i<n;i++)
        {
            cin >>x;
            mp[x]++;
        }

        auto it = mp.begin();
        ll last = it->first;
        ll lastCount = it->second;
        ll ans = it->second;
        it++;
        for (; it != mp.end(); it++)
        {
            if (it->first != (last+1))
            {
                ans += it->second;
            }
            else
            {
                ans += max(0ll, it->second - lastCount);                
            }
            last = it->first;
            lastCount = it->second;
        }
        
        cout<<ans<<endl;
    }
    return 0;
}