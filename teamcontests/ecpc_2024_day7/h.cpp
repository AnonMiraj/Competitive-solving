#include<bits/stdc++.h>

#define endl '\n'
#define int long long
#define all(a) (a).begin(),(a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define vi vector<int>
using namespace std;
void file(){
  freopen("h.in","r",stdin);
  /*freopen("outputt.in","w",stdout);*/
}

vector<int> arr=
{79,88,97,169,178,187,196,259,268,277,286,295,349,358,367,376,385,394,439,448,457,466,475,484,493,529,538,547,556,565,574,583,592,619,628,637,646,655,664,673,682,691,709,718,727,736,745,754,763,772,781,790,808,817,826,835,844,853,862,871,880,907,916,925,934,943,952,961,970,INT_MAX};
void solve(){
  string s;
  cin>>s;
  int a=0,b=0; 
  char  c;
  int suma=0;
  for(int i=0 ;i<3;i++)
  {
    c=s[i];
    suma+=c-'0';
  }
  s="";
  int sumb=0;

  for(int i=0 ;i<3;i++)
  {
    c=s[i+3];
    s+=c;
    sumb+=c-'0';
  }
  b=stoi(s);

  if(suma!=16)
  {
    cout<<"NO\n";
    return;
  }

  int nex=*upper_bound(all(arr),b);
  if(sumb==16)
  {
    cout<<"YES\n";
    return;
  }
  int sta=((b/200)*200);
  if(nex>=sta&&nex<=sta+199)
    cout<<"YES\n";
  else 
    cout<<"NO\n";
}
int32_t main(){
  /*file();*/

  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);
  int t=1;
  cin>>t;
  while(t--){
    solve();
  }

  return 0;
}
