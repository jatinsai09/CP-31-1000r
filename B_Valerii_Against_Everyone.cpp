#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > b(n);
        unordered_map < int, int > mp;
        int flag = 1;

        for (auto & it: b) {
            cin >> it;
            mp[it]++;
            if (mp[it] > 1) {
                flag = 0;
            }
        }

        if (!flag) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}