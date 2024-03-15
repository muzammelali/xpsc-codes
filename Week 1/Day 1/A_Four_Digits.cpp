#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s = to_string(n);

    int zero = 4 - s.length();
    for (int i = 0; i < zero; i++) {
        cout << '0';
    }
    cout << n;
    return 0;
}