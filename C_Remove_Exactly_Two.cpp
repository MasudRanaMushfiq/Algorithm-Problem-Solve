#include<bits/stdc++.h>
using namespace std;
#define int long long
int in[200005],x[200005];


void solve(){
    set<pair<int,int> >s;
    memset(in,0,sizeof(in));
    int n;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        int u,v;
        cin>>u>>v;
        in[u]++,in[v]++;
        s.insert({u,v});
        s.insert({v,u});
        x[i]=i;
    }
    x[n]=n;
    sort(x+1,x+1+n,[](int a,int b){
        return in[a]>in[b];
    });
    // for(int i=1;i<=n;i++)cout<<x[i]<<" ";
    // cout<<endl;
    if(n<=3)
    {
        cout<<n-2<<endl;
        return;
    }
    int ans=INT_MIN;
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(s.find({x[i],x[j]})==s.end())
            {
            // cout<<x[i]<<" "<<x[j]<<endl;
                ans=max(ans,in[x[i]]+in[x[j]]-1);
                break;
            }
            else ans=max(ans,in[x[i]]+in[x[j]]-2);
        }
    }
    cout<<ans<<endl;
}
signed main()
{
    int t=1;
	cin>>t;
	while(t--)
	solve();
	return 0;
}