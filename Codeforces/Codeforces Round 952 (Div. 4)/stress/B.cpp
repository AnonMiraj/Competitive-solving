#include<bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while(t>0){
    t--;
    long long x,y,z,k;
    cin >> x >> y >> z >> k;
    long long res=0;
long long mx;
long long my;
long long mz;
    for(long long i=1;i<=x;i++){
      if(k%i){continue;}
      for(long long j=1;j<=y;j++){
        if(k%(i*j)){continue;}
        if((k/(i*j))<=z){
          mx=(x-i);
          my=(y-j);
          mz=(z-(k/(i*j)));
          cerr<<i<<" "<<j<<" "<<(k/(i*j))<<"\n";

          res=max(res,((mx+1)*(my+1)*(mz+1)));
        }
      }
    }
    cout << res << "\n";
  }
  return 0;
}
