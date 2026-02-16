// Problem: Ambitious Kid
// Contest ID: 1866
// Rating: 800
// Link: https://codeforces.com/contest/1866/problem/A

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
    int mn = INT_MAX;
    int v;
    for (int i = 0; i < t; i++) {
        cin >> v;
        if (abs(v) < mn) mn = abs(v);
    } 
    cout << mn;
    return 0;
}
