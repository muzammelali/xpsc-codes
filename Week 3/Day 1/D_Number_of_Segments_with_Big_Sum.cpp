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
    long long l = 0, r = 0, ans = 0;

    while (r < n)
    {
        sum += arr[r];
        
        while (sum >= s)
        {
            ans += (n-r);            
            sum -= arr[l];
            l++;
        }
        r++;
    }

    cout << ans << endl;
    return 0;
}