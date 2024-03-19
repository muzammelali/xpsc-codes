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

    int l=0,r=0,cnt=0;
    while(r<m)
    {
        while(l<n && b[r] > a[l])
        {
            cnt++;
            l++;
        }
        r++;
        cout << cnt << " ";
    }
    return 0;
}