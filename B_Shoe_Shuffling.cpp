#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > v(n);

        unordered_map < int, queue < int >> mp;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            mp[v[i]].push(i);
        }
        int flag = 1;
        for (auto it: mp) {
            if (it.second.size() < 2) {
                flag = 0;
            }
        }

        if (flag == 0) {
            cout << -1 << endl;
            continue;
        }

        vector < int > res(n);
        for (auto it: mp) {
            int val = mp[it.first].front();
            mp[it.first].pop();
            mp[it.first].push(val);
        }
        for (int i = 0; i < n; i++) {
            res[i] = mp[v[i]].front();
            mp[v[i]].pop();
        }

        for (int i = 0; i < n; i++) {
            cout << res[i] + 1 << " ";
        }
        cout << endl;
    }
}