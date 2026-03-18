// Problem: Halloumi Boxes
// Contest ID: 1903
// Rating: 800
// Link: https://codeforces.com/contest/1903/problem/A

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
        int n,k; cin >> n >> k;
        vector<int>v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        if (k == 1 && !is_sorted(v.begin(),v.end())) {
            no;
            continue;
        }
        yes;
        endl;
    }

    return 0;
}
