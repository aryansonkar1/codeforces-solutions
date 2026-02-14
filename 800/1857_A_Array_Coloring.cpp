// Problem: Array Coloring
// Contest ID: 1857
// Rating: 800
// Link: https://codeforces.com/contest/1857/problem/A

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
        int p,sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> p;
            sum +=p;
        }
        if (sum & 1) no;
        else yes;
    }

    return 0;
}
