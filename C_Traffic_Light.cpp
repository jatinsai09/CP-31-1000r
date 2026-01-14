// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>

using namespace std;

int main() {
    // Write C++ code here
    // std::cout << "Try programiz.pro";

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char ch;
        cin >> ch;
        string s;
        cin >> s;

        int res = INT_MIN;
        s = s + s;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ch) {
                int c = 0;
                while (i < s.size() && s[i] != 'g')
                {
                    c++;
                    i++;
                }
                res = max(res, c);
            }
        }
        cout << res << endl;
    }

    return 0;
}