// ﷽
// Contest: Codeforces Round 988 (Div. 3)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2037/problem/D
// Memory Limit: 256
// Time Limit: 3000
// Start: Sun 17 Nov 2024 05:33:20 PM EET
// Reading Time :
// Thinking Time :
// Coding Time :
// Debug Time :
// Submit Count :
// Problem Level :
// Category :
// Comments :
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

struct CompareBySecond {
  bool operator()(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second < b.second;
  }
};

struct CompareByFirst {
  bool operator()(const pair<int, int>& a, const pair<int, int>& b) {
    return a.first > b.first;
  }
};

template <typename T, typename Compare>
void printQueue(priority_queue<T, vector<T>, Compare>& pq) {
  priority_queue<T, vector<T>, Compare> copy = pq;

  while (!copy.empty()) {
    auto p = copy.top();
    cerr << "(" << p.first << ", " << p.second << ") ";
    copy.pop();
  }
  cerr << endl;
}
#define MUTLI_CASE
void solve() {
  int n, m, l;
  cin >> n >> m >> l;
  vector<pair<int, int>> h(n);
  vector<pair<int, int>> p(m);
  priority_queue<pair<int, int>, vector<pair<int, int>>, CompareByFirst> pq1;
  priority_queue<pair<int, int>, vector<pair<int, int>>, CompareBySecond> pq2;
  for (auto& [a, b] : h) {
    cin >> a >> b;
    b = b - a;
    b++; 
  }
  for (auto& [a, b] : p) {
    cin >> a >> b;
    pq1.push({a, b});
  }
  int k = 1;
  int ans =0 ;


  for (auto& [a, b] : h) {
    while (!pq1.empty() && pq1.top().F < a) {
      pq2.push(pq1.top());
      pq1.pop();
    }
    /*debug(a,b);*/
    /*debug(k);*/
    while (!pq2.empty() && k <= b) {
      k += pq2.top().S;
      ans++;
      pq2.pop();
    }
    if(k<=b)
    {
      cout<<-1<<'\n';
      return;

    }

  }
  /*debug(n, m);*/
  /*debug(h);*/
  /*debug(p);*/

  cout<<ans<<'\n';
  /*exit(0);*/
}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;

#ifdef MUTLI_CASE
  cin >> n;
#endif
  while (n--) solve();
  return 0;
}
