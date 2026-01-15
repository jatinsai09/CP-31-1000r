#include<bits/stdc++.h>

using namespace std;
const int N = 3e5 + 5;

int32_t main() {
    int t = 1;
    cin >> t;
    vector < int > xorVal(N, 0);
    for (int i = 1; i < N; ++i) {
        xorVal[i] = xorVal[i - 1] ^ i;
    }
    while (t--) {
        int a, b;
        cin >> a >> b;
        int minlen = a, xr = xorVal[a - 1];

        if (xr == b) {
            cout << minlen << endl;
            continue;
        }

        int req = xr ^ b;

        if (req == a) {
            cout << minlen + 2 << endl;
        }
        else {
            cout << minlen + 1 << endl;
        }
    }
}