#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll sum=0,n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }

    if(sum%2==0)
        cout<<sum<<endl;

    else
    {
        sort(arr,arr+n);
        for(ll i=0;i<n;i++)
        {
            if((sum-arr[i])%2==0)
            {
                cout<<sum-arr[i]<<endl;
                break;
            }
        }
    }

    return 0;
}