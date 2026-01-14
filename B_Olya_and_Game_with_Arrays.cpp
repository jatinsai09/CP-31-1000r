#include<bits/stdc++.h>

using namespace std;

void solve() {
    int m;
    cin >> m;
    int mini = INT_MAX;
    vector < int > min2;

    while (m--) {
        int n;
        cin >> n;

        vector < int > v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        
        mini = min(v[0], mini);
        min2.push_back(v[1]);
    }

    long long res = mini;
    res += accumulate(min2.begin(), min2.end(), 0LL);
    res -= *min_element(min2.begin(), min2.end());
    
    cout << res << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}