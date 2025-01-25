#include <bits/stdc++.h>
using namespace std;

const int N = 100;
int a[N], seg[4 * N]; // Array for values and segment tree array

// Build function to initialize the segment tree
int build(int node, int left, int right) {
    if (left == right) {
        seg[node] = a[left];
        return seg[node];
    }
    int mid = (left + right) / 2;
    int leftSum = build(2 * node, left, mid);
    int rightSum = build(2 * node + 1, mid + 1, right);
    return seg[node] = leftSum + rightSum;
}

// Update function to change a specific element
int update(int node, int left, int right, int pos, int val) {
    if (left == right) { // Leaf node
        seg[node] = val;
        return seg[node];
    }
    int mid = (left + right) / 2;
    if (pos <= mid) {
        update(2 * node, left, mid, pos, val);
    } else {
        update(2 * node + 1, mid + 1, right, pos, val);
    }

    return seg[node] = seg[2 * node] + seg[2 * node + 1];
}

// Query function to get the sum in the range [l, r]
int query(int node, int left, int right, int l, int r) {
    if (r < left || l > right) return 0; // Out of range
    if (l <= left && r >= right) return seg[node]; // Complete overlap
    
    int mid = (left + right) / 2;
    return query(2 * node, left, mid, l, r) + query(2 * node + 1, mid + 1, right, l, r);
}

int main() {
    int x;
    cin >> x;
    
    for (int i = 1; i <= x; i++)
        cin >> a[i];
    
    build(1, 1, x);
    cout << query(1, 1, x, 3, 6) << endl;
    update(1, 1, x, 4, 6);
    cout << query(1, 1, x, 3, 6) << endl;
    
    return 0;
}
