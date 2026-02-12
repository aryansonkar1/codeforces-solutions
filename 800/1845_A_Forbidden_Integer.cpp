// Problem: Forbidden Integer
// Contest ID: 1845
// Rating: 800
// Link: https://codeforces.com/contest/1845/problem/A

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
        int n,k,x; cin >> n >> k >> x;
        if (x != 1) {
            yes;
            cout << n << endl;
            for (int i = 0; i < n; i++) {
                cout << 1 << " ";
            }
            cout<<endl;
        }
        else if((x==1&&k>=2)&&(n%2==0)){
            yes;
            cout << n/2 << endl;
            for (int i = 0; i < n/2; i++) {
                cout << 2 << " ";
            }
            cout<<endl;
        }
        else if(x==1&&k>=3){
            if(n%2==1){
                 yes;
            cout << n/2 << endl;
            for (int i = 0; i < n/2-1; i++) {
                cout << 2 << " ";
            }
            cout << 3 << endl;
            }
        }
        else{
            no;
        }
    }

    return 0;
}
