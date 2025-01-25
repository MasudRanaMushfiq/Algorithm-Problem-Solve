#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
    string str;
    cin >> str;
    int n = str.size();
    string last = "", first = "";

    for(int i = n-1; i >= 0; i--){
        if(str[i] != 'a')
            last += str[i];
        else
            break;
    }

    int y = last.size();

    for(int i = 0; i < n-y; i++){
        if(str[i] != 'a')
            first += str[i];
    }

    int x = first.size();

    while(y > x){
        first = first + last.back();
        last.pop_back();
        y--,
        x++;
    }
    reverse(last.begin(), last.end());

    if(first == last)
        cout<<str.substr(0, n-y);
    else
        cout<<":(";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();

    return 0;
}