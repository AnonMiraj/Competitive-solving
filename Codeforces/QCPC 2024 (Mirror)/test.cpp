#include <bits/stdc++.h>

#ifdef ALGOAT
#include "debug.hpp"
#else
#define debug(...) 0
#define debug_itr(...) 0
#define debug_bits(...) 0
#endif

// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);

#define int long long
#define F first
#define S second
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
const int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1},
          dy[8] = {0, 1, 0, -1, -1, 1, -1, 1};
using namespace std;

vector<int> getDivisors(int n) {
  vector<int> divisors;
  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      divisors.push_back(i);
      if (i * i != n) {
        divisors.push_back(n / i);
      }
    }
  }
  return divisors;
}
int mult(int n) {
  vector<int> divisors = getDivisors(n);
  int ans = 1;
  for (auto i : divisors) {
    ans *= i;
  }
  return ans;
}
map<int, int> primefacts(int n) {
  map<int, int> primes;
  for (int i = 2; i * i <= n; i++) {
    while (n % i == 0) {
      primes[i]++;
      n /= i;
    }
  }
  if (n != 1) {
    primes[n]++;
  }
  return primes;
}
int calculateNumber(vector<pair<int, int>>& factors) {
  int result = 1;
  for (auto& p : factors) {
    result *= pow(p.first, p.second);
  }
  return result;
}
bool generateCombinations(int d, vector<pair<int, int>>& factors,
                          vector<pair<int, int>>& current, int pos = 0) {
  if (pos == factors.size()) {
    int t = 0;
    for (int i = 0; i < factors.size(); i++) {
      if (factors[i].S == current[i].S * 2) t++;
    }

    if (t != factors.size() && factors != current &&
        mult(calculateNumber(current)) == d) {
      debug(d);
      debug(calculateNumber(current));
      debug(getDivisors(calculateNumber(current)));
      debug(getDivisors(d));
      debug(current);
      debug(factors);
      return 1;
    }
    return 0;
  }

  for (int count = 1; count <= factors[pos].second; count++) {
    current[pos].second = count;
    if (generateCombinations(d, factors, current, pos + 1)) return 1;
  }
  return 0;
}

void solve(int d) {
  /*int d = 36;*/
  /*cin >> d;*/
  /*debug(d);*/

  map<int, int> m = primefacts(d);

  vector<pair<int, int>> factors;
  for (auto& p : m) {
    factors.push_back(p);
  }

  vector<pair<int, int>> current;
  for (auto& p : factors) {
    current.push_back({p.first, 1});
  }

  /*debug(m);*/
  generateCombinations(d, factors, current);
}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();

  int n = 10000001;
  /*cin >> n;*/
  while (n--&&n>1000000) solve(n);
  return 0;
}
