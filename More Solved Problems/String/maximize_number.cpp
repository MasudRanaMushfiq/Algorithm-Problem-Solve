#include <bits/stdc++.h>
#define endl "\n";
using namespace std;
int main(void) {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        int n = s.size();
        int max = 0, index = -1, temp, i;
        bool flag = false;
        for(i = 1; i < n; i++) {
            temp = (s[i-1]-'0') + (s[i]-'0');
            if(temp / 10) {
                if(max <= temp) {
                    max = temp;
                    index = i;
                    flag = true;
                }
            }
        }
        if(flag) {
            string t = to_string(max);
            s[index-1] = t[0];
            s[index] = t[1];
        }
        else{
            int temp2 = (s[0]-'0') + (s[1]-'0');
            string t = to_string(temp2);
            if(temp2/10) {
                s[0] = t[0];
                s[1] = t[1];
            }
            else {
                s[0] = '0';
                s[1] = t[0];
            }
        }
        if(s[0] == '0') {
            s = s.substr(1);
        }
        cout<<s<<endl
    }
}