#include<bits/stdc++.h>

using namespace std;

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;

        vector < int > v(n);

        for (auto & i: v) {
            cin >> i;
        }

        int LB = v[0] - x, UB = v[0] + x, res = 0, l, h;

        for (int i = 1; i < n; i++) {
            l = v[i] - x;
            h = v[i] + x;

            if (LB > h || UB < l) {
                LB = l;
                UB = h;
                ++res;
            }
            else {
                LB = max(LB, l);
                UB = min(UB, h);
            }
        }

        cout << res << endl;
    }
}