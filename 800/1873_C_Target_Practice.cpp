// Problem: Target Practice
// Contest ID: 1873
// Rating: 800
// Link: https://codeforces.com/contest/1873/problem/C

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int total = 0;
        for (int i = 0; i < 10; i++) {
            string s;
            cin >> s;
            for (int j = 0; j < 10; j++) {
                if (s[j] == 'X') {
                    int dist = min({i, j, 9 - i, 9 - j});
                    total += dist + 1;
                }
            }
        }
        cout << total << '\n';
    }
 
    return 0;
}
