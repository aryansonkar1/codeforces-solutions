// Problem: Make it Beautiful
// Contest ID: 1783
// Rating: 800
// Link: https://codeforces.com/contest/1783/problem/A

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
        vector<int>v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        unordered_set<int>s(v.begin(),v.end());
        if (s.size() == 1) {
            no;
        }
        else {
            sort(v.begin(),v.end());
            yes;
            int l = 0, r = n-1;
            while(l < r) {
                cout << v[r--] << " ";
                cout << v[l++] << " ";
            }
            if (n & 1) cout << v [l] << " ";
            cout << endl;
        }
    }

    return 0;
}
