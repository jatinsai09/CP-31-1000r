#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll x, y, k;
        cin >> x >> y >> k;

        ll ts = (y * k) + k - 1;
        ll trades = ts / (x - 1);
        if (ts % (x - 1)) {
            trades++;
        }

        trades += k;
        cout << trades << endl;
    }

}