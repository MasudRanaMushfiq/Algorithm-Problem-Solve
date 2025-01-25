#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.size();
        for(int i=1; i<n; i++){
            int c = s[i];
            for(int j=i-1; j>=0; j--){
                if(c <= s[j]+1 || c == '0'){
                    break;
                }
                s[j+1] = s[j];
                s[j] = c-1;
                c--;
            }
        }
        cout<<s<<endl;
    }
}