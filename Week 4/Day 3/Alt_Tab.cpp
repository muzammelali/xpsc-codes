#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    long long t;
    cin >> t;
    stack<string> st;
    while(t--)
    {
        string s;   cin >> s;
        st.push(s);
    }
    set<string> ss;
    while(!st.empty())
    {
        if (!ss.count(st.top()))
        {
            cout << st.top().substr(st.top().size() - 2, 2);
            ss.insert(st.top());
        }
        st.pop();
    }
    return 0;
}
