#include <bits/stdc++.h>
using namespace std;

int binSearch(const vector<int>& arr, int tar){
    int left = 0, right = arr.size()-1;
    
    while(left <= right){
    int mid = (left + (right - left) / 2);
    
    if(arr[mid] == tar)
    return arr[mid];
    else if(arr[mid]<tar)
    left = mid + 1;
    else
    right = mid - 1;
    }
    return -1;
}


int main(){
    int n, target;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> target;
    sort(arr.begin(), arr.end());

    int result = binSearch(arr, target);
    cout<<result<<endl;
}