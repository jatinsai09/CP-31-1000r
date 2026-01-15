#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int maxi = 0;
    int l = -1, r = -1;
    for (int i = 1; i < n; i++) {
        if (s[i] >= s[maxi]) {
            maxi = i;
        }
        else {
            l = maxi;
            r = i;
            break;
        }
    }

    if (l == -1) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
        cout << l + 1 << " " << r + 1 << endl;
    }
}