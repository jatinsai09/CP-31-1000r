#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector < int > v(n);
    vector < pair < int, int >> vp;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] % k) {
            vp.push_back({
                v[i] % k,
                -i
            });
        }
        else {
            vp.push_back({
                k,
                -i
            });
        }
    }
    sort(vp.begin(), vp.end(), greater <> ());

    for (int i = 0; i < n; i++) {
        cout << abs(vp[i].second) + 1 << " ";
    }
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
}