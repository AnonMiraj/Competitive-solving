#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define all(a) (a.begin(),a.end())
using namespace std;
int n;
vector<vector<int>>adj;
int dfs(int node,int cnt){

  if(node == n)
    return cnt;
 // cout << "Node" << node <<" ";


  for(auto &it:adj[node])
  {
    cnt++;
    return dfs(it,cnt);
  }
  return -1;
}
void print(){
  for( int i = 1 ; i <= n ; ++i )
  {
    cout<< i << " --> ";
    for( int j = 0; j < adj[i].size() ; ++j )
    {
      cout << adj[i][j] << " ";
    }
    cout << endl;
  }
}
void solve(){
   cin >> n;
   vi arr ( n + 1 );
   for( int i = 1; i<= n; ++i)
     cin>>arr[i];
   adj.resize(n+1);
   int cnt = 0;
   for(int i = 1; i <= n; ++i )
   {
     if( i + arr[i] <= n)
     adj[i].push_back( i + arr[i]);
     adj[i+arr[i]].push_back( i);
   }
  print();
//   for( int i = 1; i <= n; ++i)
//   {
//     cnt=0;
//     cout<< dfs(i,cnt) << endl;
//   }
}
int32_t main(){

  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);

  int t = 1;
  cin>>t;
  while(t--)
    solve();


  return 0;
}

