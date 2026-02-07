#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;
using u64 = uint64_t;
using u32 = uint32_t;
using i128 = __int128_t;
using u128 = __uint128_t;

void solve() {
    constexpr int n = 1e6;
    int el = 1, mx = 1;
    for (int i = 2; i <= n; ++i) {
        int cnt = 1;
        i64 x = i;
        while (x > 1) {
            if (x & 1) {
                x = 3 * x + 1;
                ++cnt;
            } 
            x >>= 1;
            ++cnt;
        }
        if (cnt > mx) {
            el = i, mx = cnt;
        }
    }
    cout << el << '\n';
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