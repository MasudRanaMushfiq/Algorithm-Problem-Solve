#include <bits/stdc++.h>
#define endl "\n"
#define newline cout<<"\n"
using namespace std;

void solve() {
  int n, temp;
  cin>>n;
  bool not_perfect = false;
  for(int i = 0; i < n; i++) {
    cin>>temp;
    if(floor(sqrt(temp)) * floor(sqrt(temp)) != temp) {
      not_perfect = true;
    }
  }
  if(not_perfect) {
    cout<<"YES\n";
  }
  else {
    cout<<"NO\n";
  }
}

int main() 
{
    int t;
    cin>>t;
    while(t--) {
      solve();
    }
    return 0;
}