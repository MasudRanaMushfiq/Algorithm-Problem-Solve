#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100005;
int arr[MAXN];        // Original array
int blockSum[MAXN];   // Array storing sum of blocks
int blockSize;        // Size of each block

// Preprocess the array
void preprocess(int n) {
    blockSize = sqrt(n); // Calculate block size

    // Calculate block sums
    for (int i = 0; i < n; i++) {
        blockSum[i / blockSize] += arr[i];
    }
}

// Query the sum of the range [L, R]
int query(int L, int R) {
    int sum = 0;

    // Query the left partial block
    while (L < (L / blockSize + 1) * blockSize && L <= R) {
        sum += arr[L];
        L++;
    }

    // Query the fully contained blocks
    while (L + blockSize <= R) {
        sum += blockSum[L / blockSize];
        L += blockSize;
    }

    // Query the right partial block
    while (L <= R) {
        sum += arr[L];
        L++;
    }

    return sum;
}

// Update the element at index to new value
void update(int index, int newValue) {
    arr[index] = newValue;  // Update the array

    // Recalculate the block sum for the affected block
    blockSum[index / blockSize] = 0;
    for (int i = (index / blockSize) * blockSize; i < min((index / blockSize + 1) * blockSize, MAXN); i++) {
        blockSum[index / blockSize] += arr[i];
    }
}

int main() {
    int n, q;
    cin >> n;  // Number of elements in the array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    preprocess(n);  // Preprocess the array

    cin >> q;  // Number of queries
    while (q--) {
        int type;
        cin >> type;
        if (type == 1) {
            // Query the sum of range [L, R]
            int L, R;
            cin >> L >> R;
            cout << query(L, R) << endl;
        } else if (type == 2) {
            // Update the element at index to new value
            int index, newValue;
            cin >> index >> newValue;
            update(index, newValue);
        }
    }

    return 0;
}

