#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, k, b, s;
        cin >> n >> k >> b >> s;
        vector < ll > a(n, 0);

        if (s < b * k || s > b * k + (k - 1) * n) {
            cout << -1 << endl;
            continue;
        }


        a[0] = b * k;
        s -= (b * k);
        for (ll i = 0; i < n; ++i) {
            ll temp = min(k - 1, s);
            a[i] += temp;
            s -= temp;
        }
        for (ll i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;


    }
}