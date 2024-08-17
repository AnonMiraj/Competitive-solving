#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define all(a) (a.begin(),a.end())
using namespace std;

void solve(){
  int n;
  cin >> n;
  vi arr ( n + 1);
  vi res ( n + 1);
  for(int i = 1; i<= n; ++i)
    cin>>arr[i];
  res[n] = 0;
  for( int i = n - 1 ; i >= 1; --i)
  {
    if( arr[i] + i <= n && res[ i + arr[i] ] != -1)
    {
      res[i] = 1 + res[i + arr[i]];
    }
    else
    {
      res[i] = -1;
    }

  }
  for(int i = 1 ;i <= n;++i)
  {
    if(res[i] == -1) 
    {
      if( i - arr[i] >= 1 && res[ i - arr[i] ] != -1)
      {
        res[i] = 1 + res[i - arr[i]];
      }
    }
  }

  for( int i = 1 ; i <= n; ++i )
    cout << res[i] << endl ;

}

int32_t main(){

  freopen("jumping.in","r",stdin);
  //freopen("output.txt","w",stdout);

  int t = 1;
  cin>>t;
  while(t--)
    solve();


  return 0;
}

