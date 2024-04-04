#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        string a,b;
        cin >> a >> b;
        int asz = a.size(),bsz=b.size();
        if(a[asz-1] == b[bsz-1])
        {
            if(asz > bsz) 
            {
                if(a[asz-1] == 'S') cout << '<' << endl;
                else cout << '>' << endl;
            }
            else if(asz < bsz)
            {
                if(a[asz-1] == 'S') cout << '>' << endl;
                else cout << '<' << endl;
            }
            else cout << '=' << endl;
        }
        else
        {
            int sa,sb;

            if(a[asz-1] == 'S') sa=1;
            else if(a[asz-1] == 'M') sa=2;
            else if(a[asz-1] == 'L') sa=3;

            if(b[bsz-1] == 'S') sb=1;
            else if(b[bsz-1] == 'M') sb=2;
            else if(b[bsz-1] == 'L') sb=3;

            if(sa > sb) cout << '>' << endl;
            else if(sa < sb) cout << '<' << endl;
            else cout << '=' << endl;

        }
    }
    return 0;
}