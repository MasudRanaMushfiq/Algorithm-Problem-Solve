#include <iostream>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    ll t;
    cin>>t;
    while(t--) {
      ll a, b;
      cin>>a>>b;
      ll team = min(min(a, b), (a+b)/4);
      cout<<team<<endl
    }
    return 0;
}