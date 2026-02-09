#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;
using u64 = uint64_t;
using u32 = uint32_t;
using i128 = __int128_t;
using u128 = __uint128_t;

string f(string a, string b) {
    int carry = 0, idx = (int)b.size() - 1;
    for (int i = (int)a.size() - 1; i >= 0; --i) {
        int x = b[idx] - '0' + a[i] - '0' + carry;
        b[idx--] = x % 10 + '0';
        carry = x / 10;
    }
    if (idx >= 0 && carry) {
        int x = b[idx] - '0' + carry;
        b[idx--] = x % 10 + '0';
        carry = x / 10;
    }
    if (carry) {
        b = '1' + b;
    }
    return b;
}

void solve() {
    constexpr int n = 1e3;
    int idx = 3;
    string a = "1", b = "1", sum = "2";
    while ((int)sum.size() < n) {
        a = b, b = sum, sum = f(a, b);
        ++idx;
    } 
    cout << idx << '\n';
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