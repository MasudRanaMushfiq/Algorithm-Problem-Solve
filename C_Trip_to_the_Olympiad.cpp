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


signed main()
{
    optimize();

    int TC;
    cin>>TC;
    while (TC--)
    {
       int l,r;
       cin>>l>>r;
       bitset<30>a(l);
       bitset<30>b(r);
       string lf=a.to_string();
       string rf=b.to_string();
       //cout<<lf<<endl;

       int k=-1;
       for(int i=0;i<30;i++)
       {
          if(lf[i]!=rf[i])
          {
             k=i;
             break;
          }
       }
       
       lf[k]='1';
       for(int i=k+1;i<30;i++)
       {
         lf[i]='0';
       }

       rf[k]='0';
       for(int i=k+1;i<30;i++)
       {
         rf[i]='1';
       }
       
       int ansa=0,ansb=0;
       for(int i=0;i<30;i++)
       {
         if(lf[i]=='1')
         {
            ansa+=(1<<(29-i));
         }

         if(rf[i]=='1')
         {
            ansb+=(1<<(29-i));
         }
       }

       int cf=-1;
       for(int i=l;i<=r;i++)
       {
         if(i!=ansa and i!=ansb)
         {
            cf=i;
            break;
         }
       }
       cout<<ansa<<" "<<ansb<<" "<<cf<<endl;
    }  
}
