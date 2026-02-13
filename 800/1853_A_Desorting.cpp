// Problem: Desorting
// Contest ID: 1853
// Rating: 800
// Link: https://codeforces.com/contest/1853/problem/A

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int>v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        if (!is_sorted(v.begin(),v.end())){
            cout << 0 << endl;
            continue;
        } 
        int diff = INT_MAX;
        for (int i = 1; i < n; i++) {
            diff = min(diff,v[i]-v[i-1]);
        }
        cout << diff/2+1 << endl;
    }

    return 0;
}
