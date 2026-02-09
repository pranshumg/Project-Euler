#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;
using u64 = uint64_t;
using u32 = uint32_t;
using i128 = __int128_t;
using u128 = __uint128_t;

vector<int> sieve(int n) {
    vector<int> d(n + 1, 1);
    d[0] = d[1] = 0;
    for (int i = 2; i <= n / 2; ++i) {
        for (int j = 2 * i; j <= n; j += i) {
            d[j] += i;
        }
    }
    vector<int> ans;
    for (int i = 0; i < (int)d.size(); ++i) {
        if (d[i] > i) {
            ans.emplace_back(i);
        }
    }
    return ans;
}

void solve() {
    constexpr int n = 28123;
    vector<int> v = sieve(n);
    vector<bool> tmp(n + 1, false);
    for (int i = 0; i < (int)v.size(); ++i) {
        for (int j = 0; j < (int)v.size(); ++j) {
            i64 x = v[i] + v[j];
            if (x <= n) {
                tmp[x] = true;
            } else {
                break;
            }
        }
    }
    i64 sum = 0;
    for (int i = 1; i < (int)tmp.size(); ++i) {
        if (!tmp[i]) {
            sum += i;
        }
    }
    cout << sum << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}