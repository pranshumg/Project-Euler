/**
 *    author:  pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
  int N = 100;
  int S = ((N * (N + 1)) / 2);
  int S2 = (N * (N + 1) * (2 * N + 1)) / 6;
  cout << S * S - S2 << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  run_case();
  return 0;
}