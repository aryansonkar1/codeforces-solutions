// Problem: Goals of Victory
// Contest ID: 1877
// Rating: 800
// Link: https://codeforces.com/contest/1877/problem/A

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
        vector<int>v(n-1);
        for (int i = 0; i < n-1; i++) cin >> v[i];
        int sum = 0;
        for (int x : v) sum += x;
        cout << -1*sum <<endl;
    }

    return 0;
}
