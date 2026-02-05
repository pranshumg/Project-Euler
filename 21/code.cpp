#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;
using u64 = uint64_t;
using u32 = uint32_t;
using i128 = __int128_t;
using u128 = __uint128_t;

#define all(x) (x).begin(), (x).end()

int f(int n) {
    int sum = 0;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            sum += i;
            if (n / i != i && i > 1) {
                sum += n / i;
            }
        }
    }
    return sum;
}

void solve() {
    constexpr int n = 10000;
    int ans = 0;
    for (int i = 1; i < n; ++i) {
        int x = f(i), y = f(x);
        if (y == i && i != x) {
            ans += i;
        }
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}