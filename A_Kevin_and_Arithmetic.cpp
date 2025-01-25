#include<bits/stdc++.h>
using namespace std;
// data types
typedef long long ll;
typedef unsigned long long ull; 
typedef long double lld;
typedef int64_t i64;
// const values
constexpr ll INF = 2e18;
constexpr lld EPS = 1e-16;  
constexpr ll MOD = 1e9 + 7;
#define pi acos(-1)
#define nl '\n'
#define NL cout << '\n' ;
#define FOR(arr) for(auto &u : arr) 
#define FOR1(i,n) for(ll i=0; i<n; i++)
#define FOR2(i,n) for(ll i=n-1; i>=0; i--)
#define all(arr) (arr).begin(), (arr).end()
#define allr(x) rbegin(x), rend(x)

// ------------- Array and Vector Operations -------------
#define mem(arr,value) memset(arr, value, sizeof(arr))
#define lbPos(arr, x) distance((arr).begin(), lower_bound(all(arr), (x))) // first index greater or equal to x
#define ubPos(arr, x) distance((arr).begin(), upper_bound(all(arr), (x))) // first index greater than x
#define count_freq(arr,x) ub(arr, x) - lb(arr, x);
#define MIN(v) *min_element(all(v))
#define MAX(v) *max_element(all(v))
#define perm(v) for(bool flag = true; (flag ? exchange(flag, false) : next_permutation(all(v)));)
#define in(n) ll n ; cin >> n ;
#define in2(n,k) ll n,k ; cin >> n>>k ;
#define ins(s) string s ; cin >> s ;
#define inp(arr,n) vector<ll>arr(n); for (auto it = arr.begin() ; it != arr.end(); ++it) { cin >> *it; }
#define printArr(arr) for(auto it = arr.begin(); it != arr.end(); ++it) { cout << *it << (" \n"[(it + 1 == arr.end())]); }
#define print2(mp) for(auto it = mp.begin(); it != mp.end(); ++it) { cout << it->first << " " << it->second << (" \n"[next(it) == mp.end()]); }


void Engineer(){
    in(n) ;
    inp(arr, n) ;
    int odd = 0, even = 0 ;
    FOR(arr) u & 1 ? odd++ : even ++ ;
    if(even > 0) odd ++ ;
    else odd -- ;
    cout << odd << nl ;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t; while(t--)  
    Engineer();

}