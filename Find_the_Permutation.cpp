//In the name of ALLAH
//bismillahir rahmanir rahim

#include<bits/stdc++.h>
using namespace std;
#define int long long int

#define pb push_back
#define endl '\n'
#define mod 1000000007
 
const double eps = 1e-9;
const int inf = 2000000000;
const int infl = 9000000000000000000;
 
#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};


string s[1005];
int a[1005];
bool com(int x,int y)
{
    return (x<y^s[x][y]=='0');
}
signed main()
{
    optimize();

    int TC;
    cin>>TC;
    while (TC--)
    {
       int n;
       cin>>n;
       for(int i=0;i<n;i++)
       {
         cin>>s[i];
         a[i]=i;
       }
       sort(a,a+n,com);
       for(int i=0;i<n;i++)
       {
         cout<<a[i]+1<<" ";
       }
       cout<<endl;
    }  
}