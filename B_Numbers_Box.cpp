#include<bits/stdc++.h>

using namespace std;

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        int r, c;
        cin >> r >> c;

        int n = 0, z = 0, mini = INT_MAX, res = 0;
        int a[r][c];

        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                cin >> a[i][j];

                if (a[i][j] < 0) ++n;
                if (a[i][j] == 0) z = 1;

                mini = min(abs(a[i][j]), mini);
                res += abs(a[i][j]);
            }
        }

        if (n % 2 && z != 1) res -= (2 * mini);

        cout << res << endl;
    }

}