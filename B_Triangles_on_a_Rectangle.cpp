#include<bits/stdc++.h>

using namespace std;

#define int long long int

void answer(int w, int h) {
    int area = 0, fp, sp, a;
    for (int i = 0; i < 4; ++i) {
        int k;
        cin >> k;
        fp = 0, sp = 0;
        for (int i = 0; i < k; ++i) {
            cin >> a;
            if (i == 0) {
                fp = a;
            }
            sp = a;
        }
        if (i <= 1) {
            area = max(area, (sp - fp) * h);
        }
        else {
            area = max(area, (sp - fp) * w);
        }
    }
    cout << area << endl;
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int w, h;
        cin >> w >> h;
        answer(w, h);
    }
}