/**
 *    author:  pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

bool reverse(int n) {
  int rev = 0, og = n;
  while (n > 0) {
    int d = n % 10;
    rev = rev * 10 + d;
    n /= 10;
  }
  return rev == og;
}

void run_case() {
  int maxi = INT_MIN;
  for (int i = 100; i <= 999; ++i) {
    for (int j = 100; j <= 999; ++j) {
      if (reverse(i* j)) {
        maxi = max(maxi, i * j);
      }
    }
  }
  cout << maxi << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  run_case();
  return 0;
}