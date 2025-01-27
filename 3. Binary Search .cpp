#include <bits/stdc++.h>
using namespace std;

// Function to perform binary search
int binarySearch(const vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // To prevent overflow

        if (arr[mid] == target) {       
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n, target;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> target;
    sort(arr.begin(), arr.end());

    int result = binarySearch(arr, target);

    if (result != -1){
        cout << "Target found at index: " << result << endl;
    }else{
        cout << "Target not found in the array." << endl;
    }

    return 0;
}
