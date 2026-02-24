// Problem: Line Trip
// Contest ID: 1901
// Rating: 800
// Link: https://codeforces.com/contest/1901/problem/A

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
        int n,x; cin >> n >> x;
        vector<int>v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        int mx = v[0];
        for (int i = 0; i < n-1; i++) {
            mx = max(mx,(v[i+1]-v[i]));
        }
        mx = max(mx,2*(x-v[n-1]));
        cout << mx << endl;
    }

    return 0;
}
