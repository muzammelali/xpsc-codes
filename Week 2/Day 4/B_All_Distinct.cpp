#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        
        set<int> st;

        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            st.insert(x);
        }

        int sz=st.size();

        if((n-sz)%2 == 1) cout << sz-1 << endl;
        else cout << sz << endl;
    }
    return 0;
}