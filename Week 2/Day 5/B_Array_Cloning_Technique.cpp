#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n;
        map<int,int> mp;
        int maxCnt=0;
        for(int i=0;i<n;i++)
        {
            cin >> x;
            mp[x]++;
            maxCnt = max(maxCnt,mp[x]);
        }
        if(maxCnt == n) cout << 0 << endl;
        else
        {
            int cnt=1;
            while(maxCnt <= n)
            {
                if(maxCnt+maxCnt >= n)
                {
                    cnt += (n-maxCnt);
                    break;
                }
                cnt += maxCnt+1;
                maxCnt += maxCnt;
            }

            cout << cnt << endl;
        }

    }
    return 0;
}