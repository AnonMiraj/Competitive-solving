// ﷽
// Contest: Educational Codeforces Round 171 (Rated for Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2026/problem/D
// Memory Limit: 512
// Time Limit: 4000
// Start: Tue 29 Oct 2024 02:02:32 AM EEST
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

/*#define int long long*/
#define F first
#define S second
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
const int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1},
          dy[8] = {0, 1, 0, -1, -1, 1, -1, 1};
using namespace std;

int n;
 
vector<long long> a;
vector<long long> pa;
vector<long long> ppa;
vector<long long> start;
vector<long long> block;
vector<long long> pblock;
 
vector<long long> prefix_sums(vector<long long> v)
{
 	int k = v.size();
 	vector<long long> res(k + 1);
 	for(int i = 0; i < k; i++) res[i + 1] = res[i] + v[i];
 	return res;
}
 
long long get_partial(int l, int r1, int r2)
{
	// s(l, r1) + s(l, r1 + 1) + ... + s(l, r2 - 1)
 	if(r2 <= r1) return 0ll;
 	int cnt = r2 - r1;
 	long long rem = pa[l] * cnt;
 	long long add = ppa[r2 + 1] - ppa[r1 + 1];
        debug(pa);
        debug(ppa);
        debug(rem);
        debug(add);
 	return add - rem;
}
 
pair<int, int> convert(long long i)
{
	int idx = upper_bound(start.begin(), start.end(), i) - start.begin() - 1;
	pair<int, int> res = {idx, i - start[idx] + idx};
	return res; 	
}
 
long long query(long long l, long long r)
{
	pair<int, int> lf = convert(l);
	pair<int, int> rg = convert(r);
        debug(lf);
        debug(rg);
	long long res = pblock[rg.first + 1] - pblock[lf.first];
        debug(res);
	if(lf.second != lf.first) res -= get_partial(lf.first, lf.first, lf.second);
        debug(res);
	if(rg.second != n - 1) res -= get_partial(rg.first, rg.second + 1, n);
        debug(res);
	return res;	
}
 
int main()
{
	scanf("%d", &n);
	a.resize(n);
	for(int i = 0; i < n; i++) scanf("%lld", &a[i]);
	pa = prefix_sums(a);
	ppa = prefix_sums(pa);
        debug(pa);
        debug(ppa);
	start = {0};
	for(int i = n; i >= 1; i--)
		start.push_back(start.back() + i);

	block.resize(n);
	for(int i = 0; i < n; i++)
		block[i] = get_partial(i, i, n);
	pblock = prefix_sums(block);
        debug(block);
        debug(pblock);
        debug(start);
	int q;
	scanf("%d", &q);
	for(int i = 0; i < q; i++)
	{
	 	long long l, r;
	 	scanf("%lld %lld", &l, &r);
	 	printf("%lld\n", query(l - 1, r - 1));
	}
 
}
