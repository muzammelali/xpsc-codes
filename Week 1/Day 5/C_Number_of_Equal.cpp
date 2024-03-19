#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int a[n],b[m];

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin >> b[i];
    }

    int l=0,r=0;
    long long ans=0;
    while(l<n && r<m)
    {
        int cur = a[l];
        int cnt1=0,cnt2=0;
        while(cur==a[l] && l<n)
        {
            cnt1++;
            l++;
        }
        while(cur > b[r] && r<m) r++;
        while(cur==b[r] && r<m)
        {
            cnt2++;
            r++;
        }
        ans += (1LL * cnt1 * cnt2);
    }
    cout << ans << '\n';
    return 0;
}