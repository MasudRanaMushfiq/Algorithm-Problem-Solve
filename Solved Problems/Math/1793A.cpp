#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--) {
      ll a, b, n, m;
      cin>>a>>b>>n>>m;
      ll ans;
      if(a*m <= b*(m+1)) {
        ans = (n / (m+1)) * a * m;
        int rem = n % (m+1);
        if(rem * a < rem * b) {
          ans += rem * a;
        }
        else {
        ans += rem * b;
        }
      }
      else {
        ans = n * b;
      }
      cout<<ans<<endl
    }
    return 0;
}