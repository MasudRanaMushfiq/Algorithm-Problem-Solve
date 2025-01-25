#include <iostream>
using namespace std;

int ternarySearch(int l, int r, int key, int arr[]) {
    while (r >= l) {
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;

        if (arr[mid1] == key) return mid1;
        if (arr[mid2] == key) return mid2;

        if (key < arr[mid1]) {
            r = mid1 - 1;
        } else if (key > arr[mid2]) {
            l = mid2 + 1;
        } else {
            l = mid1 + 1;
            r = mid2 - 1;
        }
    }
    return -1;
}

int main() {
    int l = 0, r = 9, p, key;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // First search
    key = 5;
    p = ternarySearch(l, r, key, arr);
    cout << "Index of " << key << " is " << p << endl;

    // Second search
    key = 50;
    p = ternarySearch(l, r, key, arr);
    cout << "Index of " << key << " is " << p << endl;

    return 0;
}
