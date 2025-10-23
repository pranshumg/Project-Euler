/**
 *    author:  pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

vector<int> sieve(int n) {
  vector<int> primes(n, 1);
  primes[0] = primes[1] = 0;
  for (int i = 2; i * i <= n; ++i) {
    if (primes[i]) {
      for (int j = i * i; j <= n; j += i) {
        primes[j] = 0;
      }
    }
  }
  return primes;
}

void run_case() {
  int N = 2000000;
  vector<int> primes = sieve(N);
  int64_t sum = 0;
  for (int i = 0; i < (int)primes.size(); ++i) {
    if (primes[i]) {
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