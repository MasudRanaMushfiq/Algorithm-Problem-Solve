#include <bits/stdc++.h>
using namespace std;

bool naive_matching(string text, string pattern) {
    int n = text.size();
    int m = pattern.size();
    for(int i = 0; i < n; i++) { 
        int j = 0;
        for(j = 0; j < m && i + j < n; j++) { 
            if(text[i + j] != pattern[j]) { 
            break;
            }
        }
        if(j == m) {
            return true;
        }
    }
    return false;
}



int main(){
    string text, pattern;
    cin>>text>>pattern;
    int a = naive_matching(text,pattern);
    if(a==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}

