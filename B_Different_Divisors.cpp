#include<bits/stdc++.h>

using namespace std;
vector < int > v;
int n = 1000000;

void prime() {
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; ++p) {
        if (prime[p]) {
            for (int i = p * p; i <= n; i += p) {
                prime[i] = false;
            }
        }
    }

    for (int p = 2; p <= n; ++p) {
        if (prime[p]) {
            v.push_back(p);
        }
    }
}

int main() {
    int t = 1;
    cin >> t;
    prime();
    while (t--) {
        int d;
        cin >> d;
        int res = 1, j = 1;

        for (auto i: v) {
            if (i - j >= d) {
                res *= i;
                j = i;
                break;
            }
        }

        for (auto i: v) {
            if (i - j >= d) {
                res *= i;
                j = i;
                break;
            }
        }


        cout << res << endl;
    }
}