// ï·½
// Contest: Codeforces Round 849 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1791/problem/F
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 23 Mar 2024 11:23:13 PM EET
//
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<>, rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_set;
#ifdef MOHAMED
#include "debug.hpp"
#else
#define debug(...) 0
#define debug_itr(...) 0
#define debug_bits(...) 0
#endif
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

#define ll long long
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vll vector<ll>
#define vi vector<int>
#define endl "\n"

template <typename T> istream &operator>>(istream &input, vector<T> &data) {
  for (T &x : data)
    input >> x;
  return input;
}
template <typename T>
ostream &operator<<(ostream &output, const vector<T> &data) {

  for (const T &x : data)
    output << x << " ";
  return output;
}
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
int digitSum(int n) {
  int total = 0;
  while (n > 0) {
    total += n % 10;
    n /= 10;
  }
  return total;
}
void solve2() {
  int n, q;
  cin >> n >> q;
  vector<int> a(n);
  for (auto &i : a)
    cin >> i;
  set<int> st;
  for (int i = 0; i < n; i++)
    st.insert(i);
  while (q--) {
    int t;
    cin >> t;
    if (t == 1) {
      int l, r;
      cin >> l >> r;
      l--, r--;
      auto it = st.lower_bound(l);
      vector<int> er;
      while (it != st.end() && *it <= r) {
        auto &ret = a[*it];
        ret = digitSum(ret);
        if (ret < 10)
          er.push_back(*it);
        it++;
      }

      for (auto &i : er)
        st.erase(i);
      er.clear();
    } else {
      int x;
      cin >> x;
      cout << a[--x] << '\n';
    }
  }
}
void solve() {
  int n, q;
  cin >> n >> q;
  vi arr(n);
  cin >> arr;
  set<int> se;
  for (int i = 0; i < n; ++i)
    se.insert(i);

  int choose;

  while (q--) {
    cin >> choose;
    if (choose == 1) {
      int l, r;
      cin >> l >> r;
      l--, r--;
      auto it = se.lower_bound(l);
      vi shit;
      while (it != se.end()  && *it <= r) {
        if (arr[*it] < 10) {
          shit.push_back(*it);
        } else {
          arr[*it] = digitSum(arr[*it]);
        }
          ++it;
      }
      for (auto &itx : shit)
        se.erase(itx);

    } else {
      int x;
      cin >> x;
      cout << arr[x - 1] << endl;
    }
  }
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int t = 1;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
