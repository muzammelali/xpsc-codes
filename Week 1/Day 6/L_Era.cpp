#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        int ans=0;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(int i=0;i<n;i++)
        {
            ans = max(ans,(a[i]-i)-1);
        }
        cout << ans << endl;
    }
    return 0;
}