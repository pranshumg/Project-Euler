#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;
using u64 = uint64_t;
using u32 = uint32_t;
using i128 = __int128_t;
using u128 = __uint128_t;

int f(string& s) {
    int sum = 0;
    for (auto& it : s) {
        sum += it - 'A' + 1;
    }
    return sum;
}

void solve() {
    ifstream file("0022_names.txt");
    if (!file.is_open()) {
        cerr << "Error: Could not open file. Make sure it is in the correct folder\n";
        return;
    }
    vector<string> v;
    string s;
    while (getline(file, s, ',')) {
        if ((int)s.size() >= 2) {
            string tmp = s.substr(1, (int)s.size() - 2);
            v.emplace_back(tmp);
        }
    }
    sort(v.begin(), v.end());
    i64 ans = 0;
    for (int i = 0; i < (int)v.size(); ++i) {
        ans += f(v[i]) * (i + 1);
    }
    cout << ans << '\n';
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