#include<bits/stdc++.h>

using namespace std;

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        int n, a, b, LCM = INT_MAX, lcm_val;
        cin >> n;
        a = 1, b = n - 1;

        for (int i = 2;
            (i * i) <= n; ++i) {
            if (n % i == 0) {

                int a1 = i;
                int b1 = n - i;
                lcm_val = max(a1, b1);
                if (lcm_val < LCM) {
                    a = min(a1, b1);
                    b = max(a1, b1);
                    LCM = lcm_val;
                }

                int a2 = n / i;
                int b2 = n - a2;
                lcm_val = max(a2, b2);
                if (lcm_val < LCM) {
                    a = min(a2, b2);
                    b = max(a2, b2);
                    LCM = lcm_val;
                }
            }
        }
        cout << a << " " << b << endl;
    }
}