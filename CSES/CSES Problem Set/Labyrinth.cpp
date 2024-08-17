// ﷽
// Contest: CSES Problem Set
// Judge: CSES
// URL: https://cses.fi/problemset/task/1193
// Memory Limit: 512
// Time Limit: 1000
// Start: Sat 06 Jul 2024 08:55:52 PM EEST
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

  int n,m;

  vector<vector<char>>v;
  vector<vector<int>>visted;
  pair<int,int> sta,en;



void bfs(int startX, int startY)
{
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};
    
    queue<pair<pair<int, int>, int>> q;
    
    q.push({{startY, startX}, 1});
    
    visted[startY][startX] = 1;

    while (!q.empty())
    {
        auto [pos, cnt] = q.front();
        auto [y, x] = pos;
        q.pop();


        for (int i = 0; i < 4; ++i)
        {
            int newX = x + dx[i];
            int newY = y + dy[i];

            if (newX >= 0 && newX < m && newY >= 0 && newY < n)
            {
                if (v[newY][newX] != '#' && visted[newY][newX] == INT_MAX)
                {
                    visted[newY][newX] = cnt + 1;

                    if (make_pair(newY, newX) == en)
                    {
                        return;
                    }

                    q.push({{newY, newX}, cnt + 1});
                }
            }
        }
    }
}

string dfsback(int x,int y )
{
    string path = "";
    
    while (visted[y][x] != 1) {
        if (x > 0 && visted[y][x] - 1 == visted[y][x - 1]) {
            path += "R";
            x = x - 1;
        } else if (x < m - 1 && visted[y][x] - 1 == visted[y][x + 1]) {
            path += "L";
            x = x + 1;
        } else if (y < n - 1 && visted[y][x] - 1 == visted[y + 1][x]) {
            path += "U";
            y = y + 1;
        } else if (y > 0 && visted[y][x] - 1 == visted[y - 1][x]) {
            path += "D";
            y = y - 1;
        } else {
            break;
        }
    }
    return path;

}
void solve() {
  cin>>n>>m;
  v =vector<vector<char>>(n,vector<char>(m));
  visted =vector<vector<int>>(n,vector<int>(m,INT_MAX));
  char c;

  for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    {
      cin>>c;
      v[i][j]=c;
      switch(c)
      {
        case 'A':
          sta={i,j};
          break;
        case 'B':
          en={i,j};
          break;
      }
    }

  debug(sta);
  debug(en);

  bfs(sta.second,sta.first);
  /*for(int i=0;i<n;i++)*/
  /*  debug(visted[i]);*/

  if(visted[en.first][en.second]==INT_MAX)
  {
    cout<<"NO\n";
    return;
  }
  cout<<"YES\n";
  string ans=dfsback(en.second,en.first);
  reverse(ans.begin(),ans.end());
  cout<<visted[en.first][en.second]-1<<endl;
  cout<< ans;

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
