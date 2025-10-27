/**
 *    author:  pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int64_t largest_prime_factor(int64_t n) {
  int64_t maxi = INT_MIN;
  for (int64_t i = 2; i * i <= n; ++i) {
    if (n % i == 0) {
      maxi = max(maxi, i);
      while (n % i == 0) {
        n /= i;
      }
    }
  }
  if (n > 1) {
    maxi = max(maxi, n);
  }
  return maxi;
}

void run_case() {
  int64_t N = 600851475143;
  int64_t maxi = largest_prime_factor(N);
  cout << maxi << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  run_case();
  return 0;
}