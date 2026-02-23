// Problem: Cover in Water
// Contest ID: 1900
// Rating: 800
// Link: https://codeforces.com/contest/1900/problem/A

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
        string s; cin >> s;
        bool flg = false;
        int count = 0,total = 0;
        for (char ch : s) {
            if(ch == '.') {
                count++;
                if (count == 3) {
                    flg = true;
                    break;
                }
            }
            else {
                total += count;
                count = 0;
            }
        }
        total += count;
        if(flg) cout << 2 << endl;
        else  cout << total << endl;
    }
    return 0;
}
