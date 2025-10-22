/**
 *    author:  pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
  int sum = 0;
  for (int i = 1; i < 1000; ++i) {
    if (!(i % 3) || !(i % 5)) {
      sum += i;
    }
  }
  cout << sum << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  run_case();
  return 0;
}