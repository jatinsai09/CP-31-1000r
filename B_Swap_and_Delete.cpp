#include<bits/stdc++.h>

using namespace std;

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        int ones = 0;
        for (int i = 0; i < n; i++) {
            ones += s[i] - '0';
        }
        int zeros = n - ones;
        int i;

        for (i = 0; i < n; i++) {
            if (s[i] == '1') {
                if (zeros) {
                    --zeros;
                }
                else {
                    break;
                }
            }
            else {
                if (ones) {
                    --ones;
                }
                else {
                    break;
                }
            }
        }

        cout << n - i << endl;
    }
}