#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, r, b;
        cin >> n >> r >> b;
        int rg = r / (b + 1);
        int rem = r % (b + 1);
        int k = rg;
        string s(n, 'R');
        if (rem) {
            k++;
            rem--;
        }
        while (k < n) {
            s[k] = 'B';
            k += (rg + 1);
            if (rem) {
                k++;
                rem--;
            }
        }
        cout << s << endl;
    }
}