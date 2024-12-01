// ﷽
// Contest: Codeforces Global Round 8
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/1368/problem/C
// Memory Limit: 512
// Time Limit: 2000
// Start: Thu 19 Sep 2024 06:01:11 PM EEST
// Reading Time :
// Thinking Time :
// Coding Time :
// Comments :
#include <bits/stdc++.h>

#ifdef ALGOAT
#include "debug.hpp"
#else
#define debug(...) 0
#define debug_itr(...) 0
#define debug_bits(...) 0
#endif

/*#include <matplot/matplot.h>*/
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

vector<pair<int, int>> v0 = {{2, 1}, {2, 2}, {1, 0}, {1, 2},
                             {0, 0}, {0, 1}, {0, 2}};

vector<pair<int, int>> v1 = {{4, -2}, {4, -1}, {4, 0}, {3, -2}, {3, 0},
                             {2, -2}, {2, -1}, {2, 0}, {2, 1},  {2, 2},
                             {1, 0},  {1, 2},  {0, 0}, {0, 1},  {0, 2}};

vector<pair<int, int>> v2 = {
    {4, -2}, {4, -1}, {4, 0},  {3, -2}, {3, 0},  {2, -2}, {2, -1}, {2, 0},
    {2, 1},  {2, 2},  {1, 0},  {1, 2},  {0, 0},  {0, 1},  {0, 2},  {0, 3},
    {0, 4},  {-1, 2}, {-1, 4}, {-2, 2}, {-2, 3}, {-2, 4}};
vector<pair<int, int>> v3 = {
    {4, -2}, {4, -1}, {4, 0},  {3, -2}, {3, 0},  {2, -2}, {2, -1}, {2, 0},
    {2, 1},  {2, 2},  {1, 0},  {1, 2},  {0, 0},  {0, 1},  {0, 2},  {0, 3},
    {0, 4},  {-1, 2}, {-1, 4}, {-2, 2}, {-2, 3}, {-2, 4}, {-2, 5}, {-2, 6},
    {-3, 4}, {-3, 6}, {-4, 4}, {-4, 5}, {-4, 6}};
void solve() {
  /*using namespace matplot;*/
  int n;
  cin >> n;
  std::vector<double> x_values;
  std::vector<double> y_values;

  cout<<v0.size()*(n-1)+v1.size()<<"\n";
  for (auto i : v1) {
    cout << i.F << " " << i.S << "\n";

    /*x_values.push_back((i.F));*/
    /*y_values.push_back((i.S));*/
  }

  for (int i = 1; i < n; i++) {
    for (auto j : v0) {
      cout << j.F + i * (-2) << " " << j.S + i * (2) << "\n";

      /*x_values.push_back(j.F + i * (-2));*/
      /*y_values.push_back(j.S + i * (2));*/
    }
  }

      /*x_values.push_back(2);*/
      /*y_values.push_back(0);*/
    /*scatter(x_values, y_values);*/
    /*    show();*/
}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;
  /*cin>>n;*/
  while (n--) solve();
  return 0;
}
