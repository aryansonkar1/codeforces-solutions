// Problem: Doremy's Paint 3
// Contest ID: 1890
// Rating: 800
// Link: https://codeforces.com/contest/1890/problem/A

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
// #define int long long
#define yes cout << "Yes" << endl
#define no cout << "No" << endl

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int>v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        unordered_map<int,int>mp;
        for (int x : v) mp[x]++;
        if (mp.size() == 1) yes;
        else if(mp.size() > 2) no;
        else {
            auto it = mp.begin();
            int c1 = it->second;
            it++;
            int c2 = it->second;

            if (abs(c1 - c2) > 1) no;
            else yes;
        }
    }

    return 0;
}
