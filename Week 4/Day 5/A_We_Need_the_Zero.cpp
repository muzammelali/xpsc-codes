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
        vector<ll> arr(n);
        ll ans=0;
        for(auto &it:arr)
        {
            cin >> it;
            ans ^= it;
        }
        if(ans==0)
            cout <<0<<endl;
        else
        {
            if(n%2==1) 
                cout <<ans<<endl;
            else cout <<-1<<endl;
        }
    }
    return 0;
}