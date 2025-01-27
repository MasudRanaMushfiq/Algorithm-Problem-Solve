#include <iostream>
#define endl "\n";
using namespace std;

int main() 
{
    int n, k;
    cin>>n>>k;
    int remaining = 240 - k, result = 0, i;
    for(i = 1; i <= n && result + i*5 <= remaining; i++) {
      result += i*5;
    }
    cout<<i-1<<endl;
    return 0;
}