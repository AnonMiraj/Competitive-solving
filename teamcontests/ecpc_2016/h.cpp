#include<bits/stdc++.h>
#define endl "\n"
#define vi vector<int>
#define all(a) (a.begin(),a.end())
using namespace std;

int a[11][11][11] = {0};
int vis[11][11][11] = {0};
int df(int i,int j, int k){

  ij(i==0||j==11||k==11)
    return 0;
  if(vis[i][j][k]!=-1)
    return vis[i][j][k];
  return  vis[i][j][k]=(max({df(i-1,j,k),df(i,j+1,k),df(i,j,k+1)})+a[i][j][k]);

}
void solve(){
  int n; cin >> n;
  for(int i = 0; i < 11; i++) {
    for(int j = 0; j < 11; j++) {
      for(int k = 0; k < 11; k++) {
        a[i][j][k]=0;
        vis[i][j][k]=-1;
      }
    }
  }

  for(int i = 0; i < n; i++) {
    int f, y, x, h; cin >> f >> y >> x >> h;
      a[f][y][x]=h;
  }

  cout << df(10,0,0) << endl;
}

int main() {

  freopen("commandos.in","r",stdin);
  //freopen("output.txt","w",stdout);

  int t;
  cin>>t;
  while(t--) {
    solve();
  }


  return 0;
}


