#include<bits/stdc++.h>

using namespace std;

void freq(vector < int > & a, vector < int > & fa) {
    int n = a.size();
    int i = 0, j = 0;
    while (i < n) {
        int c = 0;
        while (j < n && a[i] == a[j]) {
            ++c;
            ++j;
        }
        fa[a[i]] = max(c, fa[a[i]]);
        i = j;
    }
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector < int > a(n), b(n);
        for (auto & i: a) {
            cin >> i;
        }
        for (auto & i: b) {
            cin >> i;
        }

        vector < int > fa(2 * n + 1, 0), fb(2 * n + 1, 0);

        freq(a, fa);
        freq(b, fb);
        int res = INT_MIN;
        for (int i = 1; i <= 2 * n; i++) {
            res = max(res, fa[i] + fb[i]);
        }
        cout << res << endl;
    }
}