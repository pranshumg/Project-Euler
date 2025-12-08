#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ull = unsigned long long;
using i128 = __int128;
using u128 = unsigned __int128;

#define all(x) (x).begin(), (x).end()

constexpr int n = 100;

void solve() {
    int s = (n * (n + 1)) / 2;
    int s2 = (n * (n + 1) * (2 * n + 1)) / 6;
    cout << s * s - s2 << '\n';
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