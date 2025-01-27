#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr;
    for (int num = 1; num <= 10000; ++num){
        string str = to_string(num);
        for (char digit : str) {
            arr.push_back(digit - '0');
        }
    }  
 

    int a; 
    cin>>a;
    cout<<arr[a-1]<<endl;

    return 0;
}