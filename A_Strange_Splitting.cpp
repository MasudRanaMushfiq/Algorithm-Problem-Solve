#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	long long arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
    }
	
	if(arr[0] == arr[n - 1]){
		cout<<"NO"<<endl;
	}else{
		string x;
		for(int i = 0; i < n; i++){
			x += 'B';
        }
        if(arr[n - 2] == arr[n - 1]){
                x[n - 1] = 'R';
            }else{
                x[0] = 'R';
        }
		cout<<"YES"<<endl;
		cout<<x<<endl;
	}
}

int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

	int t;
	    cin>>t;
	for(int i = 0; i<t; i++){
	solve();
    }
}
