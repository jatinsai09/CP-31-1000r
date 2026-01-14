#include<bits/stdc++.h>

using namespace std;

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        long long n, k, q;
        cin >> n >> k >> q;
        vector < long long > a(n);
        for (auto & i: a) {
            cin >> i;
        }

        long long res = 0;

        for (int i = 0; i < n;) {
            if (a[i] > q) {
                i++;
            }
            else {
                long long count = 0;
                while (i < n && a[i] <= q) {
                    ++count;
                    ++i;
                }
                if (count >= k) {
                    long long y = (count - k) + 1;
                    res += (y * (y + 1)) / 2;
                }
            }
        }
        cout << res << endl;
    }
}