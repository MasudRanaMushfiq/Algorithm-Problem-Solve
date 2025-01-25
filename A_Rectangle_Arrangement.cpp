#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,w,h;
    cin >> n;
    int mxw=0,mxh=0;
    for(int i = 0; i < n; i++) {
        cin >> w >>h ;
        mxw = max(w,mxw);
        mxh = max(h,mxh);
    }
    cout << 2 * (mxw+mxh) << endl;
}

int main() {
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}