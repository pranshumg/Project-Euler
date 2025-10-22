/**
 *    author:  pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

#define N 4000000

void run_case() {
  int a = 0, b = 1, sum = a + b;
  int64_t ans = 0;
  while (sum <= N) {
    if (!(sum & 1)) {
      ans += sum;
    }
    a = b, b = sum, sum = a + b;
  }
  cout << ans << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  run_case();
  return 0;
}