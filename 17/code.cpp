#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;
using u64 = uint64_t;
using u32 = uint32_t;
using i128 = __int128;
using u128 = unsigned __int128;

#define all(x) (x).begin(), (x).end()

void solve() {
    map<int, int> mp = {{0, 0}, {1, 3}, {2, 3}, {3, 5}, {4, 4}, {5, 4}, {6, 3}, {7, 5}, {8, 5}, {9, 4}, {10, 3}, {11, 6}, {12, 6}, {13, 8}, {14, 8}, {15, 7}, {16, 7}, {17, 9}, {18, 8}, {19, 8}, {20, 6}, {30, 6}, {40, 5}, {50, 5}, {60, 5}, {70, 7}, {80, 6}, {90, 6}, {100, 7}, {1000, 8}};
    int ans = 0, And = 3;
    for (int i = 1; i <= 19; ++i) {
    	ans += mp[i];
    }
    for (int i = 2; i <= 9; ++i) {
    	for (int j = 0; j <= 9; ++j) {
    		ans += mp[j] + mp[i * 10];
    	}
    }
    ans *= 10;
    for (int i = 1; i <= 9; ++i) {
    	ans += (mp[i] + mp[100]) * 100 + (And) * 99;
    }
    ans += mp[1] + mp[1000];
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