#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;
using u64 = uint64_t;
using u32 = uint32_t;
using i128 = __int128;
using u128 = unsigned __int128;

#define all(x) (x).begin(), (x).end()

void solve() {
    constexpr int n = 1000;
    string s = "1";
    for (int i = 1; i <= n; ++i) {
    	int carry = 0;
    	for (int j = (int)s.size() - 1; j >= 0; --j) {
    		int d = ((s[j]  - '0') * 2) + carry;
    		s[j] = ((d % 10) + '0');
    		carry = d / 10;  
    	}
    	if (carry) {
    		s = "1" + s;
    	}
    }
    int ans = 0;
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