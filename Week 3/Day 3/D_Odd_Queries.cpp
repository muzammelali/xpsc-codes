#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n,q;
        cin >> n >> q;
        vector<int> v(n,0);
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            if(i==0) v[i]=x;
            else v[i] = v[i-1]+x;
        }
        while(q--)
        {
            int l,r,k;
            cin >> l >> r >> k;
            r--;
            l--;
            int x= v[r] - v[l-1];

            if(l==0)
                x=v[r];

            int y=k*(r-l+1);
            if((v[n-1]+y-x)%2) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}