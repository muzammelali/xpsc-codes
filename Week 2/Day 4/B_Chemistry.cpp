#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        
        map<char,int> map;

        for(char c : s)
        {
            map[c]++;
        }

        int odd=0;

        for(auto m:map)
        {
            if(m.second % 2==1)
            {
                odd++;
            }
        }
        if(odd-1 <= k)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}