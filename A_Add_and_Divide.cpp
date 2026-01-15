#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;

        ll mini = 32, c, temp;

        for (ll i = 0; i <= 30; ++i) {
            if (b == 1 && i == 0) {
                continue;
            }
            c = i;
            temp = a;
            while (temp) {
                temp /= (b + i);
                ++c;
            }
            mini = min(mini, c);
        }
        cout << mini << endl;
    }
}