#include<bits/stdc++.h>

using namespace std;

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int mini = INT_MAX, w = 0;

        for (int i = 0; i < k; ++i) {
            if (s[i] == 'W') {
                ++w;
            }
        }
        mini = min(w, mini);

        for (int i = k; i < n; ++i) {
            if (s[i - k] == 'W') {
                --w;
            }
            if (s[i] == 'W') {
                w++;
            }
            mini = min(w, mini);
        }
        cout << mini << endl;
    }

}