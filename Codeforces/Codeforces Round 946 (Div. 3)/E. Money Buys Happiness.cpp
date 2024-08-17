// ﷽
// Contest: Codeforces Round 946 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1974/problem/E
// Memory Limit: 256
// Time Limit: 3000
// Start: Mon 20 May 2024 07:38:00 PM EEST
// Reading Time : 
// Thinking Time : 
// Coding Time : 
// Comments : 
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

using namespace std;

int m, x;
vector<pair<int, int>> v;
vector<vector<int>> memo;

int bf(int month, int money) {
    if (month > m) return 0; 
    if (memo[month][money] != -1) return memo[month][money]; 

    int ans = bf(month + 1, money+x);

    if (money >= v[month - 1].first) {
        ans = max(ans, v[month - 1].second + bf(month + 1, money - v[month - 1].first+x));
    }

    memo[month][money] = ans; 
    return ans;
}

void solve() {
    cin >> m >> x;
    v.resize(m);
    int bruh=0;
    for (int i = 0; i < m; ++i) {
        cin >> v[i].first >> v[i].second;
        bruh+=v[i].second;

    }
    int sum=0;
    for(int i = 0;i < m;i++) sum+=v[i].second;
    memo.assign(m + 1, vector<int>(bruh, -1));

    cout << bf(1,0) << endl;
}

int32_t main() {
    fastio();

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
