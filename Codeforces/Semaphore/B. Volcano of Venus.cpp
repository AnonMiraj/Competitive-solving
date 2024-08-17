// ﷽
// Contest: Semaphore
// Judge: Codeforces
// URL: https://codeforces.com/gym/536143/problem/B
// Memory Limit: 256
// Time Limit: 5000
// Start: Sat 10 Aug 2024 01:15:20 PM EEST
// Reading Time : 
// Thinking Time : 
// Coding Time : 
// Comments : https://github.com/AnonMiraj/Icpc-refrence
#include<bits/stdc++.h>

#ifdef ALGOAT
#include "debug.hpp"
#else
#define debug(...) 0
#define debug_itr(...) 0
#define debug_bits(...) 0
#endif

// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

#define int long long
#define ll long long
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define F first
#define S second
#define vi vector<int>

using namespace std;
class SegmentTree {
public:
  SegmentTree(int n) {
    size = 1;
    while (size < n) size <<= 1;
    sums.assign(2 * size, 0LL);
    mins.assign(2 * size, LLONG_MAX);
    maxs.assign(2 * size, LLONG_MIN);
  }

  void build(const vi &a) {
    build(a, 0, 0, size);
  }

  void update(int i, int v) {
    update(i, v, 0, 0, size);
  }

  ll sumSeg(int l, int r) {
    return sumSeg(l, r, 0, 0, size);
  }

  ll minSeg(int l, int r) {
    return minSeg(l, r, 0, 0, size);
  }

  ll maxSeg(int l, int r) {
    return maxSeg(l, r, 0, 0, size);
  }

private:
  int size;
  vector<ll> sums, mins, maxs;

  void build(const vi &a, int x, int lx, int rx) {
    if (rx - lx == 1) {
      if (lx < (int)a.size()) {
        sums[x] = a[lx];
        mins[x] = a[lx];
        maxs[x] = a[lx];
      }
      return;
    }
    int mid = (lx + rx) / 2;
    build(a, 2 * x + 1, lx, mid);
    build(a, 2 * x + 2, mid, rx);
    sums[x] = sums[2 * x + 1] + sums[2 * x + 2];
    mins[x] = min(mins[2 * x + 1], mins[2 * x + 2]);
    maxs[x] = max(maxs[2 * x + 1], maxs[2 * x + 2]);
  }

  void update(int i, int v, int x, int lx, int rx) {
    if (rx - lx == 1) {
      sums[x] = v;
      mins[x] = v;
      maxs[x] = v;
      return;
    }
    int mid = (lx + rx) / 2;
    if (i < mid) {
      update(i, v, 2 * x + 1, lx, mid);
    } else {
      update(i, v, 2 * x + 2, mid, rx);
    }
    sums[x] = sums[2 * x + 1] + sums[2 * x + 2];
    mins[x] = min(mins[2 * x + 1], mins[2 * x + 2]);
    maxs[x] = max(maxs[2 * x + 1], maxs[2 * x + 2]);
  }

  ll sumSeg(int l, int r, int x, int lx, int rx) {
    if (lx >= r || l >= rx) return 0;
    if (lx >= l && rx <= r) return sums[x];
    int mid = (lx + rx) / 2;
    ll left = sumSeg(l, r, 2 * x + 1, lx, mid);
    ll right = sumSeg(l, r, 2 * x + 2, mid, rx);
    return left + right;
  }

  ll minSeg(int l, int r, int x, int lx, int rx) {
    if (lx >= r || l >= rx) return LLONG_MAX;
    if (lx >= l && rx <= r) return mins[x];
    int mid = (lx + rx) / 2;
    ll left = minSeg(l, r, 2 * x + 1, lx, mid);
    ll right = minSeg(l, r, 2 * x + 2, mid, rx);
    return min(left, right);
  }

  ll maxSeg(int l, int r, int x, int lx, int rx) {
    if (lx >= r || l >= rx) return LLONG_MIN;
    if (lx >= l && rx <= r) return maxs[x];
    int mid = (lx + rx) / 2;
    ll left = maxSeg(l, r, 2 * x + 1, lx, mid);
    ll right = maxSeg(l, r, 2 * x + 2, mid, rx);
    return max(left, right);
  }
};
void solve() {
  int n;
  cin>>n;
  SegmentTree tr(n);
  vi v(n);
  map<int,vector<int>>m;
  int j=0;
  for(auto&i:v)
  {

    cin>>i;
    m[i].push_back(j++);
  }
  tr.build(v);
  int q;
  cin>>q;
  int l,r;
  int mi,ma;
  debug(m);
  while(q--)

  {
    cin>>l>>r;
    l--;
    ma=tr.maxSeg(l,r);
    mi=tr.minSeg(l,r);
    debug(l,r);
    debug(ma,mi);

    if(ma!=mi)
    {

       ma=*(lower_bound(all(m[ma]),l));
       mi=*(lower_bound(all(m[mi]),l));

      cout<<ma+1<<" "<<mi+1<<endl;
    }
    else
      cout<<"-1 -1\n";
  }
  cout<<endl;
 

}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  cin>>n;
  while (n--)
    solve();
  return 0;
}
