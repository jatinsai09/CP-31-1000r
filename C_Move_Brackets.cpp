#include<bits/stdc++.h>

using namespace std;

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int op = 0, cl = 0, res = 0;

        for (int i = 0; i < n; ++i) {
            if (s[i] == '(') op++;
            else cl++;

            if (cl > op) {
                cl--;
                res++;
            }
        }
        cout << res << endl;
    }
}