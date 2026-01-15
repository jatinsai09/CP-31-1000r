// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;

        int lcs = 0;
        int sa = a.size();
        int sb = b.size();
        vector < vector < int >> dp(sa + 1, vector < int > (sb + 1, 0));

        for (int i = 0; i < sa; ++i) {
            for (int j = 0; j < sb; ++j)
            {
                if (a[i] == b[j]) {
                    dp[i + 1][j + 1] = dp[i][j] + 1;
                }
                lcs = max(dp[i + 1][j + 1], lcs);
            }
        }
        cout << sa + sb - (2 * lcs) << endl;
    }

    return 0;
}