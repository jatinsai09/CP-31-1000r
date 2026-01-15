#include<bits/stdc++.h>

using namespace std;

#define int long long int

void solve(int a, int b) {
    int c = 0;

    while (a % 8 == 0 && a / 8 >= b) {
        a >>= 3;
        c++;
    }
    while (a % 4 == 0 && a / 4 >= b) {
        a >>= 2;
        c++;
    }
    while (a % 2 == 0 && a / 2 >= b) {
        a >>= 1;
        c++;
    }

    if (a == b) {
        cout << c << endl;
    }
    else {
        cout << -1 << endl;
    }
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a < b) {
            swap(a, b);
        }
        if (a == b) {
            cout << 0 << endl;
            continue;
        }
        if (a % b) {
            cout << -1 << endl;
            continue;
        }
        solve(a, b);
    }
}