// Problem: Game with Integers
// Contest ID: 1899
// Rating: 800
// Link: https://codeforces.com/contest/1899/problem/A

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
        if( n % 3) cout << "First" << endl;
        else cout << "Second" << endl;
    }

    return 0;
}
