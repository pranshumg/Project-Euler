#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ull = unsigned long long;
using u32 = unsigned;
using i128 = __int128;
using u128 = unsigned __int128;

#define all(x) (x).begin(), (x).end()

void solve() {
    constexpr int n = 100;
	string s = "1";
    for (int i = 2; i <= n; ++i) {
		int carry = 0;
		for (int j = (int)s.size() - 1; j >= 0; --j) {
			int d = (s[j] - '0') * i + carry;
			s[j] = (d % 10) + '0';
			carry = d / 10;
		}
		while (carry) {
			s.insert(s.begin(), carry % 10 + '0');
			carry /= 10;
		}
    }
    ll ans = 0;
    for (auto &it : s) {
    	ans += it - '0';
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