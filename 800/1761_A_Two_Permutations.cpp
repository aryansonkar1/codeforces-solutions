// Problem: Two Permutations
// Contest ID: 1761
// Rating: 800
// Link: https://codeforces.com/contest/1761/problem/A

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define yes cout << "Yes" << endl
#define no cout << "No" << endl

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        if (n == 1 && a == 1 && b == 1) yes;
        else if (a+b <= n-2 || (a == b && a == n)) yes;
        else no;
    }

    return 0;
}
