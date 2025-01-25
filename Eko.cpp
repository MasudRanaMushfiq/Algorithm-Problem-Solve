#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    long long n;
    long long m;
    cin>>n>>m;
    vector<long long> tr(n);
    
    for(int i = 0; i<n; ++i)
        cin >> tr[i];
    
    long long x = 0, num = 0;;
    long long y = *max_element(tr.begin(), tr.end());
    
    while(x <= y){
        long long mid = x + (y - x)/2;
        long long sum = 0;
        
        for(int i = 0; i<n; ++i){
            if(tr[i] > mid)
                sum += (tr[i] - mid);
            if(sum >= m)
                break;
        }
        if(sum >= m){
            num = mid;
            x = mid + 1;
        }else{
            y = mid - 1;
        }
    }
    cout<<num<<endl;    
}
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    solve();
            
    return 0;
}