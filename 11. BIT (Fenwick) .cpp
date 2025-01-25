#include <iostream>
#include <vector>

using namespace std;

// Function to update the BIT
void updateBIT(vector<int>& BIT, int n, int index, int value) {
    // Increment index to match BIT's 1-based indexing
    index++;
    while (index <= n) {
        BIT[index] += value;
        index += index & (-index);
    }
}

// Function to get the prefix sum up to the given index
int getPrefixSum(vector<int>& BIT, int index){
    int sum = 0;
    // Increment index to match BIT's 1-based indexing
    index++;
    while (index > 0) {
        sum += BIT[index];
        index -= index & (-index);
    }
    return sum;
}

// Function to construct the BIT
vector<int> constructBIT(const vector<int>& arr, int n) {
    vector<int> BIT(n + 1, 0); // BIT initialized with zeros
    for (int i = 0; i < n; i++) {
        updateBIT(BIT, n, i, arr[i]);
    }
    return BIT;
}

int main() {
    vector<int> arr = {3, 2, -1, 6, 5, 4, -3, 3, 7, 2}; // Original array
    int n = arr.size();

    // Construct the BIT
    vector<int> BIT = constructBIT(arr, n);

    // Get prefix sum up to index 5
    cout << "Prefix sum up to index 5: " << getPrefixSum(BIT, 5) << endl;

    // Update the array at index 3 (0-based) by adding 3
    updateBIT(BIT, n, 3, 3);

    // Get the updated prefix sum up to index 5
    cout << "Updated prefix sum up to index 5: " << getPrefixSum(BIT, 5) << endl;

    return 0;
}

