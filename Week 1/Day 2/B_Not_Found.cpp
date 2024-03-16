#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;

    bool arr[26] = {false};

    for(int i=0;i<s.size();i++)
    {
        arr[s[i]-'a'] = true;
    }
    for(int i=0;i<26;i++)
    {
        if(arr[i] == false)
        {
            cout << char(i + 'a');
            return 0;
        }
    }
    cout << "None";
    return 0;
}