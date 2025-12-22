#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;
using u64 = uint64_t;
using u32 = uint32_t;
using i128 = __int128;
using u128 = unsigned __int128;

#define all(x) (x).begin(), (x).end()

bool reverse(int n) {
    int rev = 0, og = n;
    while (n > 0) {
        int d = n % 10;
        rev = rev * 10 + d;
        n /= 10;
    }
    return rev == og;
}

void solve() {
    int mx = INT_MIN;
    for (int i = 100; i <= 999; ++i) {
        for (int j = 100; j <= 999; ++j) {
            if (reverse(i * j)) {
                mx = max(mx, i * j);
            }
        }
    }
    cout << mx << '\n';
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