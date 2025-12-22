#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;
using u64 = uint64_t;
using u32 = uint32_t;
using i128 = __int128;
using u128 = unsigned __int128;

#define all(x) (x).begin(), (x).end()

void solve() {
    constexpr int n = 4000000;
    int a = 0, b = 1, sum = a + b;
    i64 ans = 0;
    while (sum <= n) {
        if (!(sum & 1)) {
            ans += sum;
        }
        a = b;
        b = sum;
        sum = a + b;
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