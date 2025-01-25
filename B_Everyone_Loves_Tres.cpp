#include <bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n % 2 == 0){
            for(int i = 0; i < n - 2; i++){
                cout<<"3";
            }cout<<"66"<<endl;
        }else if(n > 3){
            for(int i = 0; i < n - 4; i++){
                cout<<"3";
            }cout<<"6366"<<endl;
        }else
            cout<<"-1"<<endl;
    }


}