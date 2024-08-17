#include<bits/stdc++.h>

#define endl '\n'
#define int long long
#define all(a) (a).begin(),(a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define vi vector<int>
using namespace std;

int32_t main() {
  int t; cin >> t;
  while (t--) {
    string a, b; cin >> a >> b;
    int n = sz(a);
    int cnt = 0;
    for(int i =0 ;i < n; i ++) {
      if (a[i]!=b[i]) {
        cnt++;
      }
    }
    cout << cnt << endl;
  }
  return 0;
}
