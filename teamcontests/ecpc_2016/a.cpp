#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define all(a) (a.begin(),a.end())
using namespace std;
void solve(){
  int g;
  cin>>g;
  pair<int,int>p[g];
  for(int i=0;i<g;i++){
    cin>>p[i].first>>p[i].second;
  }
  int w=1;
  
  int x=0;
  for(int i=0;i<g;i++){
    if(p[i].first<=p[i].second)
    {
      w^=3;
      x++;
    }
    if((p[i].second%p[i].first)&1)
    {
      w^=3;
    }
  } 
  if(w==2)
  {
    if(x&1)
      w^=3;

  }


  cout<<(w^3)<<"\n";


  
}
int32_t main(){

  freopen("powers.in","r",stdin);
  //freopen("output.txt","w",stdout);

  int t;
  cin>>t;
  while(t--)
    solve();


  return 0;
}

