// ﷽
// Contest: The 2024 Damascus University Collegiate Programming Contest (DCPC 2024)
// Judge: Codeforces
// URL: https://codeforces.com/gym/105242/problem/G
// Memory Limit: 1024
// Time Limit: 1000
// Start: Fri 05 Jul 2024 12:41:46 PM EEST
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

void solve() {
    string s;
    cin>>s;
    int n=s.size();
    vector <vector<int>> suff(26);
    for (int i=0;i<n;i++)
    {
        suff[s[i]-'a'].push_back(i);
    }
    for (int i=0;i<n;)
    {
        int mx1=-1;
        int cnt=0;
        for (int j=0;j<26;j++)
        {
            if (!suff[j].empty())
            {
                auto it=lower_bound(suff[j].begin(),suff[j].end(),i);
                if (it!=suff[j].end())
                {
                    mx1=max(mx1,*it);
                    cnt++;
                }
            }
        }
        if (char(cnt+'a'-1)>s[i])
        {
            for (int j=i;j<=mx1;j++)
            {
                s[j]=char('a'+cnt-1);
            }
            int j=mx1+1;
            for (;j<n;j++)
            {
                if (s[j]<=char(cnt+'a'-1))  s[j]=char('a'+cnt-1);
                else break;
            }
            i=j;
        }
        else if (char(cnt+'a'-1)==s[i])
        {
            int j=i;
            while (s[j]==s[i])
            {
                j++;
            }
            if (j==n) break;
            if (s[j]<s[i])
            {
                int kw=i;
                for (;kw<=mx1;kw++)
                {
                    s[kw]=s[i];
                }
                for (;kw<n;kw++)
                {
                    if (s[kw]<=char(cnt+'a'-1))  s[kw]=char('a'+cnt-1);
                    else break;
                }
                i=kw;
            }
            else
            {
                i=j;
            }
        }
        else i++;
    }
    cout<<s<<'\n';
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  // cin>>n;
  while (n--)
    solve();
  return 0;
}
