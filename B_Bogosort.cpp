#include<bits/stdc++.h>
using namespace std;

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        vector<int> v(n);
        for(auto &i: v){
            cin >> i;
        }
        sort(rbegin(v), rend(v));
        
        for(int i : v){
            cout << i << " ";
        }
        cout << endl;
    }
    
}