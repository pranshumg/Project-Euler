/**
 *    author:  pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int divisors(int n) {
  int cnt = 0;
  for (int i = 1; i * i <= n; ++i) {
    if (n % i == 0) {
      ++cnt;
      if (n / i != i) {
        ++cnt;
      }
    }
  }
  return cnt;
}

void run_case() {
  int n = 1, sum = 0;
  while (true) {
    sum += n;
    if (divisors(sum) > 500) {
      cout << sum << '\n';
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