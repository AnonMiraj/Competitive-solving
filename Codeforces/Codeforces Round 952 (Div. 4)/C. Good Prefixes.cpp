// ﷽
// Contest: Codeforces Round 952 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1985/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 11 Jun 2024 05:42:43 PM EEST
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

  int x = 172933;
void hackedsolve(int n,vector<int> &nums)
{

       clock_t begin = clock();

        int ans = 0 , sum = 0;
        unordered_set<int> ele;
 
        for(int &i : nums){
            sum += i;
            ele.insert(i);
            if(sum % 2 == 0 && ele.count(sum / 2))
                ans++;
        }
 
        cout << ans << '\n';
    printf("x = %lld: %.3lf seconds, sum = %lld\n", x, (double) (clock() - begin) / CLOCKS_PER_SEC, sum);
}
void solve() {
  int n;
  cin>>n;
  int ma=0,sum=0;
  int x;
  int ans=0;
  for(int i=0;i<n;i++)
  {
    cin>>x;
    ma=max(x,ma);
    sum+=x;
  if(sum==2*ma)
    ans++;

  }
  cout<<ans<<"\n";


}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  cin>>n;

  const int N = 2e5;
  vector<int> v;
  for (int i = 1; i <= N; i++)
      v.push_back(i * x) ;
  while (n--)
    hackedsolve(N,v);
  return 0;
}
