#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ull = unsigned long long;
using i128 = __int128;
using u128 = unsigned __int128;

#define all(x) (x).begin(), (x).end()

constexpr int n = 10001;

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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}