#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        stack<int> st;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            char x;
            cin >> x;
            if(x=='(') st.push(x);
            if(x==')')
            {
                if(!st.empty() && st.top() == '(') st.pop();
                else cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}