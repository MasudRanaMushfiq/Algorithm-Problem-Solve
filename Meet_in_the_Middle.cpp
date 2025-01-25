#include <bits/stdc++.h>
using namespace std;

long long middle(vector<long long>& nums, long long target) {
    long long ans = 0;
    long long n = nums.size();
    long long sum = accumulate(nums.begin(), nums.end(), 0LL);
    if (sum < target) return 0;
    if (sum == target) return 1;

    long long mid = n / 2;
    vector<long long> left(nums.begin(), nums.begin() + mid);
    vector<long long> right(nums.begin() + mid, nums.end());

    vector<long long> ls = {0};
    vector<long long> rs = {0};

    for (long long num : left) {
        long long size = ls.size();
        for (long long i = 0; i < size; i++) {
            ls.push_back(ls[i] + num);
        }
    }

    for (long long num : right) {
        long long size = rs.size();
        for (long long i = 0; i < size; i++) {
            rs.push_back(rs[i] + num);
        }
    }

    sort(ls.begin(), ls.end());
    sort(rs.begin(), rs.end());

    for (long long num : rs) {
        long long rr = target - num;

        auto it = lower_bound(ls.begin(), ls.end(), rr);

        ans += distance(it, upper_bound(ls.begin(), ls.end(), rr));
    }

    return ans;
}

int main() {
    long long n, m;
    cin >> n >> m;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++) cin >> a[i];

    cout << middle(a, m) << endl;
    return 0;
}
