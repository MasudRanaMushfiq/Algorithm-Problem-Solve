#include <iostream>
#include <cmath>
using namespace std;

int find_max_length(int l, int r) {
    // Calculate the range
    long long range = r - l;
    if (range == 0) return 1;

    // Solve for k using the quadratic formula
    long long k = (-1 + sqrt(1 + 8 * range)) / 2;
    return k + 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        cout << find_max_length(l, r) << endl;
    }
    return 0;
}