#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, p;
        cin >> n >> p;

        vector < int > a(n);
        for (auto & i: a) {
            cin >> i;
        }

        vector < int > b(n);
        for (auto & i: b) {
            cin >> i;
        }

        vector < pair < long long, long long >> cost_cap;
        cost_cap.push_back({
            p,
            n + 1
        });


        for (int i = 0; i < n; i++) {
            cost_cap.push_back({
                b[i],
                a[i]
            });
        }

        sort(cost_cap.begin(), cost_cap.end());

        int total = 1;
        long long cost = p;
        int idx = 0;

        while (total < n) {
            int left = n - total;

            if (cost_cap[idx].second <= left) {
                total += cost_cap[idx].second;
                cost = cost + cost_cap[idx].first * 1LL * cost_cap[idx].second;
            }
            else {
                total = n;
                cost = cost + cost_cap[idx].first * 1LL * left;
            }
            idx++;
        }
        cout << cost << endl;
    }
}