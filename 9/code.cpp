#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ull = unsigned long long;
using u32 = unsigned;
using i128 = __int128;
using u128 = unsigned __int128;

#define all(x) (x).begin(), (x).end()

void solve() {
    constexpr int n = 1000;
    for (int a = 1; a <= n; ++a) {
    	for (int b = a + 1; b <= n; ++b) {
    		for (int c = b + 1; c <= n; ++c) {
    			if (a + b + c == n && (a * a + b * b == c * c)) {
    				cout << a * b * c << '\n';
    				return;
    			}
    		}
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