// Problem: Buttons
// Contest ID: 1858
// Rating: 800
// Link: https://codeforces.com/contest/1858/problem/A

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
        int a,b,c; cin >> a >> b >> c;
        if(c & 1) a++;
        if (a > b) cout << "First" << endl;
        else cout << "Second" << endl;
    }

    return 0;
}
