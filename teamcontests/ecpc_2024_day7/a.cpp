#include<bits/stdc++.h>

#define endl '\n'
#define int long long
#define all(a) (a).begin(),(a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define vi vector<int>
using namespace std;
void file(){
  freopen("a.in","r",stdin);
  /*freopen("outputt.in","w",stdout);*/
}
void f(int a,map<int,int>&m)
{
  int n=a;
  for(int i=2;i*i<n;i++)
  {
    while(!(n%i))
    {
      m[i]++;
      n/=i;
    }
  }
  if(n!=1)
  {
    m[n]++;
  }
}
void solve(){
  int a,c;
  cin>>a>>c;
  map<int,int> ma,mc;
  f(a,ma);
  f(c,mc);

  int ans=1;
  for(auto & [a,b]:ma)
  {
    if(b-mc[a])
      mc[a] = max(b,mc[a]);
    else 
      mc[a]=0;

  }

  for(auto & [a,b]:mc)
  {
    ans *= pow(a,b);
  }
  if(lcm(a,ans)!=c)
  {
    /*cout<<lcm(a,ans);*/
    cout<<-1<<"\n";
  }
  else
  cout<<ans<<endl;
}
int32_t main(){
  /*file();*/
  int t=1;
  cin>>t;
  while(t--){
    solve();
  }


  return 0;
}
