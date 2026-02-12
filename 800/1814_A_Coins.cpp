// Problem: Coins
// Contest ID: 1814
// Rating: 800
// Link: https://codeforces.com/contest/1814/problem/A

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
        int n , k;
        cin >> n >> k;
        if (k % 2 == 1) {
            cout << "YES" << endl;
        } else {
            cout << (n % 2 == 0 ? "YES" : "NO") << endl;
        }
    }

    return 0;
}
