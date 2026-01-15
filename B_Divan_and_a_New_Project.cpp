#include<bits/stdc++.h>

using namespace std;

#define int long long int

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > v(n + 1);
        int h = 1;
        vector < pair < int, int >> vp;

        for (int i = 1; i <= n; i++) {
            cin >> v[i];
            vp.push_back({
                v[i],
                i
            });
        }
        sort(rbegin(vp), rend(vp));

        vector < int > res(n + 1);
        res[0] = 0;
        int mt = 0;
        for (int i = 0; i < vp.size(); i++) {
            int ind = vp[i].second;
            if (i & 1) {
                res[ind] = -h;
                h++;
            }
            else {
                res[ind] = h;
            }
        }
        for (int i = 1; i <= n; ++i) {
            mt += (v[i] * abs(res[i]));
        }
        mt *= 2;
        cout << mt << endl;
        for (auto it: res) {
            cout << it << " ";
        }
        cout << endl;
    }
}