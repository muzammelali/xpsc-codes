#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--)
    {
        int n,m,h;
        cin >> n >> m >> h;
        
        vector<int> a(n),b(m);
        
        for(auto &it:a) cin >> it;
        for(auto &it:b) cin >> it;
        
        sort(a.begin(),a.end(),greater<int>());
        sort(b.begin(),b.end(),greater<int>());
        
        long long ans=0;
        for(int i=0;i<min(n,m);i++)
        {
            ans += min(1ll*b[i]*h,1ll*a[i]);
        }
        cout << ans<<endl;
    }
}
