#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int a[n];

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(int i=0;i<n-1;i++)
        {
            int c=min(a[i],a[i+1]);

            a[i]-=c;
            a[i+1]-=c;
            
        }
        bool x=true;

        for(int i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                x=false;
                break;
            }
        }
        if(x)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
       
    }

    
    return 0;
}