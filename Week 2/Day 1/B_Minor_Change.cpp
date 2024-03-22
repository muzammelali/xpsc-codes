#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,s2;
    cin >> s >> s2;
    long long int cnt=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] != s2[i]) s[i] = s2[i],cnt++;
    }
    cout << cnt;
    return 0;
}