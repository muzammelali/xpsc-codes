#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// your code goes here
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;  cin >> n;
        ll arr[n];
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        
        ll total = 0;
        for(int i=0;i<n;i++)
        {
            total ^= arr[i];
        }
        
        ll min_Xor = total;
        
        for(int i=0;i<n;i++)
        {
            ll xor_i = total ^ arr[i];
            min_Xor = min(min_Xor, xor_i);
        }
        cout << min_Xor << endl;
    }
}
