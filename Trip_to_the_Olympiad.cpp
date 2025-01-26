// ----->>>> HELLO HABIBI <<<<-----
// #include<bits/stdc++.h>
#include<iostream>
#include<bitset>
using namespace std;

void solve() {
    int l, r;
    cin >> l >> r;
    int sum = 0;
    for(int i = 30 ; i >= 0 ; i--) {
        int x = 1 << i;
        int rset = x & r;
        int lset = x & l;
        if(lset == rset) {
            if(rset)
                sum += x;
        }
        else {
            if(sum + x == r) {
                int tmp = sum + x;
                cout << tmp << ' ' << tmp - 1 << ' ' << tmp - 2 << endl;
            }
            else {
                int tmp = sum + x;
                cout << tmp << ' ' << tmp + 1 << ' ' << tmp - 1 << endl;
            }
            break;
        }
    }

    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}