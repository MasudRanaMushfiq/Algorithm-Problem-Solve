#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c,d, num = 0;
        cin>>a>>b>>c>>d;

    if(a>b)
        swap(b,a);

    for(int i=a; i<=b; i++){
        if(c == i)
            num++;
        if(d == i)
            num++;
    }
    if(num == 1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
