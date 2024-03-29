#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        stack<char> st;

        bool flag = true;

        for(int i=0;i<n;i++)
        {
            char c = tolower(s[i]);
            if(c == 'm') 
            {                               
                if(!st.empty() && st.top()!='m')
                {
                    flag = false;
                    break;
                }
                else if(st.empty()) st.push(c); 
            }
            else if(!st.empty() && c=='e' && (st.top() == 'm' || st.top() == 'e'))
            {
                if(st.top() == 'm') st.push(c);                
            }
            else if(!st.empty() && c=='o' && (st.top() == 'e' || st.top() == 'o'))
            {
                if(st.top() == 'e') st.push(c);
            }
            else if(!st.empty() && c=='w' && (st.top() == 'o' || st.top() == 'w'))
            {
                if(st.top() == 'o') st.push(c);
            }
            else
            {
                flag=false;
                break;
            }
        }

        if(flag && !st.empty() && st.top() == 'w' && st.size() == 4) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}