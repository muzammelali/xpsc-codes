#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--)
    {
        long long n,k;
        cin >> n >> k;
        long long arr[n];
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
            arr[i] &= 1;
        }
        long long cnt=0,ans=0;
        for(int i=0;i<n;i++)
        {
            cnt += arr[i];
            if(i>=k) cnt -= arr[i-k];
            if(i >= k-1) ans += cnt>0;
        }
        cout << ans << endl;
    }
}
