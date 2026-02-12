// Problem: Blank Space
// Contest ID: 1829
// Rating: 800
// Link: https://codeforces.com/contest/1829/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int best = 0, current = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == 0) {
                current++;
                best = max(best, current);
            } else {
                current = 0;
            }
        }

        cout << best << "\n";
    }
    return 0;
}

