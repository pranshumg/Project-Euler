#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;
using u64 = uint64_t;
using u32 = uint32_t;
using i128 = __int128;
using u128 = unsigned __int128;

#define all(x) (x).begin(), (x).end()

i64 largest_prime_factor(i64 n) {
    i64 mx = LLONG_MIN;
    for (i64 i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            mx = max(mx, i);
            while (n % i == 0) {
                n /= i;
            }
        }
    }
    if (n > 1) {
        mx = max(mx, n);
    }
    return mx;
}

void solve() {
    i64 n = 600851475143;
    i64 ans = largest_prime_factor(n);
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