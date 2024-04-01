#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        long long int sum = 0;
        
        for (int i = 0; i < n; i++) {
            if (s[i] == 'L') {
                sum += (n - 1 - i) - i;
            } else {
                sum += i - (n - 1 - i);
            }
            cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
}
