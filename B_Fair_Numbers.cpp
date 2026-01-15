#include<bits/stdc++.h>

using namespace std;

bool yes(long long n) {
    long long temp = n, r;

    while (n > 0) {
        r = n % 10;

        if (r == 0) {
            n /= 10;
            continue;
        }

        if (temp % r) return false;
        n /= 10;
    }
    return true;
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        while (!yes(n)) {
            ++n;
        }

        cout << n << endl;
    }
}