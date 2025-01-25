#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
    int c = 0;
    vector<long long> vec;

    for(int i = 0; i < n; i++){
        long long x;
            cin>>x;
        if(x&1){
            if(x > c)
            c = x;
        }else{
            vec.push_back(x); 
        }
    }
    int t = vec.size();

    if(t == n)
        cout<<0<<endl;
    else{
        long long ns = vec.size();
        sort(vec.begin(), vec.end());
        
        for(int i = 0; i<ns; i++){
            if(c > vec.back()){
                break;
            }else if(c < vec[i]){
                ns = ns + 1;
                break;
            }else{
                c += vec[i];
            }
        }
        cout<<ns<<endl;
    }

}


int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

	int t;
	    cin>>t;
	while(t--)
	    solve();
    
}

