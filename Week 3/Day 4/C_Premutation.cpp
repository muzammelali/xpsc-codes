#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll ans[n+1];
        vector<ll> v[n+1];

        for(int i=n;i>0;i--)
        {
            for(int j=1;j<=n-1;j++)
            {
                ll k;
                cin >> k;
                v[k].push_back(j);
            }
        }
        for(int i=1;i<=n;i++)
        {
            sort(v[i].begin(),v[i].end());
        }
        for(int i=1;i<=n;i++)
        {
            if(v[i][n-2]==n-1)
            {
                if(v[i][0]==n-1)
                {
                    ans[n]=i;
                }
                else 
                {
                    ans[n-1]=i;
                }
            }
            else
            {
                ans[v[i][n-2]]=i;
            }
        }
        for(int i=1;i<=n;i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}