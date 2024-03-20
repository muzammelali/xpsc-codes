#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        char c;
        string s,s2;
        cin >> n >> c >> s;
        s2 = s + s;
        int ci=0,maxdis=0;
        bool f = false;

        for(int i=0;i<s2.length();i++)
        {
            if(s2[i] == c) f=true;
            if(s2[i] == 'g')
            {
                maxdis = max(maxdis,ci);
                ci=0;
                f=false;
            }
            if(f) ci++;
        }
        cout << maxdis << endl;
    }
    return 0;
}