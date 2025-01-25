#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n ; 
    cin>>n;
    map<long long , long long> m;

    for(int i = 0 ; i< n ; i++){
        long long temp  ;
        cin>> temp;
        m[temp]++ ;
    }
    long long one ; 
    bool found = false;
    vector<long long> v;

    for(auto it : m){
        
        if(it.second >= 4){
            cout<<it.first<<" "<<it.first<<" "<<it.first<<" "<<it.first<<endl;
            return ;
        }else if(it.second >= 2){
            if(found){
                cout<<one<<" "<<one<<" "<<it.first<<" "<< it.first<<endl;
                return ;
            }else{
                one = it.first;
                found = true;
            }
        }
        if(it.second == 1  or it.second == 3 ){
            v.push_back(it.first);
        }
    }

    if(!found){
        cout<<-1<<endl;

    }else{
        sort(v.begin() , v.end());

        for(int i = 0 ; i< v.size()-1; i++){
            int temp = v[i+1] - v[i];
             temp = (temp)/2;

             if(temp < one){
                cout<< one <<" "<< one<<" "<<v[i]<<" "<<v[i+1]<<endl;
                return ;
             }

        }
        cout<<-1<<endl;

    }
    
    

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}