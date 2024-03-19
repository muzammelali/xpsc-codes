#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int a[n],b[m];
    vector<int> c;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin >> b[i];
    }

    int l=0,r=0;

    while(l<n && r<m)
    {
        if(a[l] < b[r])
        {
            c.push_back(a[l++]);
        }
        else
        {
            c.push_back(b[r++]);
        }        
    }

    while(l<n) c.push_back(a[l++]);
    while(r<m) c.push_back(b[r++]);
    
    for(int i=0;i<n+m;i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}