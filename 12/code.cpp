#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ull = unsigned long long;
using i128 = __int128;
using u128 = unsigned __int128;

#define all(x) (x).begin(), (x).end()

int divisors(int n) {
    int cnt = 0;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            ++cnt;
            if (n / i != i) {
                ++cnt;
            }
        }
    }
    return cnt;
}

void solve() {
    constexpr int n = 500;
    int x = 1, sum = 0;
    while (true) {
        sum += x++;
        if (divisors(sum) > n) {
            cout << sum << '\n';
            return;
        }
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