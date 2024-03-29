#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    long long s;

    cin >> n >> s;

    int arr[n];

    for (int i = 0;i < n;i++)
    {
        cin >> arr[i];
    }

    long long sum = 0;
    int l = 0, r = 0, ans = INT_MAX;

    while (r < n)
    {
        sum += arr[r];
        
        while (sum >= s)
        {
            ans = min(ans, r - l + 1);            
            sum -= arr[l];
            l++;
        }
        r++;
    }

    if(ans != INT_MAX ) cout << ans << endl;
    else cout << -1 << endl;
    return 0;
}