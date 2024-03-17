#include <bits/stdc++.h>
using namespace std;
int main(){
    int s,t,cnt=0;
    cin >> s >> t;

    for(int i=0;i<=s;i++)
    {
        for(int j=0;j<=s;j++)
        {
            for(int k=0;k<=s;k++)
            {
                if(i+j+k <= s && i*j*k <= t) cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}