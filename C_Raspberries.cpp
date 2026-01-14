#include<bits/stdc++.h>

using namespace std;

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        int n, k, r;
        cin >> n >> k;

        vector < int > v(n);
        int res = INT_MAX, ec = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] % 2 == 0) {
                ec++;
            }
            r = v[i] % k;
            if (r != 0) {
                r = k - r;
            }
            res = min(res, r);
        }
        if (k == 4) {
            if (ec >= 2) {
                cout << 0 << endl;
            }
            else {
                cout << min(res, 2 - ec) << endl;
            }
        }
        else {
            cout << res << endl;
        }
    }
}