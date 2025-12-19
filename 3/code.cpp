#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ull = unsigned long long;
using i128 = __int128;
using u128 = unsigned __int128;

#define all(x) (x).begin(), (x).end()

ll largest_prime_factor(ll n) {
    ll mx = LLONG_MIN;
    for (ll i = 2; i * i <= n; ++i) {
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
    ll n = 600851475143;
    ll ans = largest_prime_factor(n);
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