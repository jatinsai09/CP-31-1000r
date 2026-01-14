#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main() {
    // ll t=1;
    // cin>>t;
    //while(t--){
    ll n, d;
    cin >> n >> d;

    vector < ll > v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    sort(v.rbegin(), v.rend());
    ll players = 0, wins = 0;
    int i = 0;

    while (i < n && players <= n) {
        ll x = (d + 1) / v[i];
        if ((d + 1) % v[i]) {
            ++x;
        }
        players += x;
        if (players <= n) {
            ++wins;
        }
        ++i;
    }
    cout << wins;
    //}
}