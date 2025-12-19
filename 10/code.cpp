#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ull = unsigned long long;
using i128 = __int128;
using u128 = unsigned __int128;

#define all(x) (x).begin(), (x).end()

vector<bool> sieve(int n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return is_prime;
}

void solve() {
    constexpr int n = 2000000;
    vector<bool> primes = sieve(n);
    ll sum = 0;
    for (int i = 0; i < (int)primes.size(); ++i) {
        if (primes[i]) {
            sum += i;
        }
    }
    cout << sum << '\n';
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