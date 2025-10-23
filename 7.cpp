/**
 *    author:  pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

bool is_prime(int n) {
  int cnt = 0;
  for (int i = 1; i * i <= n; ++i) {
    if (!(n % i)) {
      ++cnt;
      if (n / i != i) {
        ++cnt;
      }
    }
    if (cnt > 2) {
      return false;
    }
  }
  return cnt == 2;
}

void run_case() {
  int n = 1, cnt = 0;
  while (true) {
    if (is_prime(n)) {
      ++cnt;
    }
    if (cnt == 10001) {
      cout << n << '\n';
      return;
    }
    ++n;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  run_case();
  return 0;
}