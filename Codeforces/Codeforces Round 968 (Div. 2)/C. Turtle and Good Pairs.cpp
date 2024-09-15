// ﷽
// Contest: Codeforces Round 968 (Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2003/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 25 Aug 2024 05:36:37 PM EEST
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

// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);

#define int long long
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()

using namespace std;
int countGoodPairs(const string &s) {
  int n = s.length();
  int cnt = 0;

  for (char i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (s[i] == s[j]) {
        cnt++;
      } else {
        bool ff = false;
        for (int k = i; k < j; k++) {
          if (s[k] != s[k + 1] && (s[k] != s[i] || s[k + 1] != s[j])) {
            ff = true;
            break;
          }
        }
        if (ff) {
          cnt++;
        }
      }
    }
  }

  return cnt;
}
void solve() {
  string s;
  int n;
  cin >> n;
  cin >> s;

  /*int i=1,cnt=0;*/
  /*int ma=-1;*/
  /*string sans;*/
  /*sort(all(s));*/
  /*do {*/
  /*  int ans=countGoodPairs(s);*/
  /*  ma=max(ma,ans);*/
  /*  if(ma==ans)*/
  /*  debug(i,s,ans),cnt++,sans=s;*/
  /*  i++;*/
  /*  if(cnt==1000)*/
  /*    break;*/
  /*} while (next_permutation(s.begin(), s.end()));*/
  /*  debug();*/
  /*cout<<sans<<endl<<ma<<endl;*/
  /**/
  int machar=-1;
  char mac;
  vector<int> m(150,0);

  for(auto c:s)
    m[c]++;

  string st_ans,en_ans,m_ans,aans;


  for(char i='a';i<='z';i++)
  {
    int b=m[i];
    char a=i;
    if(b>=machar)
    {
      machar=b;
      mac=a;
    }

  }

  if(machar>=2)
{
  st_ans+=mac;
  st_ans+=mac;
  m[mac]-=2;
  n-=2;
}

machar=-1;
  for(char i='a';i<='z';i++)
  {
    int b=m[i];
    char a=i;
    if(b>=3||b>machar)
    {
      machar=b;
      mac=a;
    }

  }

  if(machar>=3)
{
  en_ans+=mac;
  en_ans+=mac;
  en_ans+=mac;
  m[mac]-=3;
  n-=3;
}


debug(n);
debug(m);
while(true)
{

  int f=1;
  for(char i='a';i<='z';i++)
  {
    char a=i; 
    if(m[i]>0)
    {
    m_ans+=a;
    m[i]--;
    f=0;
    }
  }
  if(f)
    break;
}

aans=st_ans+m_ans+en_ans;
st_ans="";
m_ans="";
n=s.size();
string bans;

  for(auto c:s)
    m[c]++;



debug(n);
debug(m);
while(true)
{

  int f=1;
  for(char i='a';i<='z';i++)
  {
    char a=i; 
    if(m[i]>0)
    {
    m_ans+=a;
    m[i]--;
    f=0;
    }
  }
  if(f)
    break;
}

bans=m_ans;

  
  cout<<aans<<"\n";
  cout<<countGoodPairs(aans)<<"\n";
  cout<<bans<<"\n";
  cout<<countGoodPairs(bans)<<"\n";

}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;
  cin >> n;
  while (n--) solve();
  return 0;
}
