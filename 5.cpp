/**
 *    author:  pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
  int L = 2520, n = 11;
  while (n <= 20) {
    L = lcm(L, n);
    ++n;
  }
  cout << L << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  run_case();
  return 0;
}