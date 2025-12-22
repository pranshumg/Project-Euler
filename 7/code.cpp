#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;
using u64 = uint64_t;
using u32 = uint32_t;
using i128 = __int128;
using u128 = unsigned __int128;

#define all(x) (x).begin(), (x).end()


bool is_prime(int x) {
    int cnt = 0;
    for (int i = 1; i * i <= x; ++i) {
        if (!(x % i)) {
            ++cnt;
            if (x / i != i) {
                ++cnt;
            }
        }
        if (cnt > 2) {
            return false;
        }
    }
    return cnt == 2;
}

void solve() {
    constexpr int n = 10001;
    int x = 1, cnt = 0;
    while (true) {
        if (is_prime(x)) {
            ++cnt;
        }
        if (cnt == n) {
            cout << x << '\n';
            return;
        }
        ++x;
    }
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