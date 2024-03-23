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
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            for(int j=0;j<x;j++)
            {
                char b;
                cin >> b;
                if(b == 'D')
                {
                    if(a[i] == 9) a[i]=0;
                    else a[i]++;
                }
                if(b == 'U')
                {
                    if(a[i] == 0) a[i]=9;
                    else a[i]--;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}