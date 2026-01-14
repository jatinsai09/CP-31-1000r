// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        set < char > st;
        vector < int > pre(n, 0), suf(n, 0);
        for (int i = 0; i <= n - 1; ++i)
        {
            st.insert(s[i]);
            pre[i] = st.size();
        }
        st.clear();

        for (int i = n - 1; i >= 0; --i) {
            st.insert(s[i]);
            suf[i] = st.size();
        }
        int res = INT_MIN;

        for (int i = 0; i < n - 1; ++i) {
            res = max(res, pre[i] + suf[i + 1]);
        }
        cout << res << endl;
    }

    return 0;
}