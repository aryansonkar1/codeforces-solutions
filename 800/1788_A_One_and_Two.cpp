// Problem: One and Two
// Contest ID: 1788
// Rating: 800
// Link: https://codeforces.com/contest/1788/problem/A

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
        vector<int>a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int totalTwos = 0;
        for (int x : a) {
            if (x == 2) totalTwos++;
        }
         if (totalTwos % 2 != 0) {
            cout << -1 << '\n';
            continue;
        }
        int need = totalTwos / 2;
        int cnt = 0;
        int answer = -1;

        for (int i = 0; i < n - 1; i++) {
            if (a[i] == 2) cnt++;
            if (cnt == need) {
                answer = i + 1; 
                break;
            }
        }

        cout << answer << '\n';
    }
    return 0;
}
