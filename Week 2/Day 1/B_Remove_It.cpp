#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin >> n >> x;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int y;
        cin >> y;
        if(y!=x) arr.push_back(y);
    }
    for(int i=0;i<arr.size();i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}