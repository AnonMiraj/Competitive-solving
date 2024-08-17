#include <algorithm>
#include <iostream>
// #include <queue>
#include <set>
// #include <bitset>
using namespace std;

int main() {

  ios_base::sync_with_stdio(0);
  cin.tie(NULL);

  // bitset<10> a(30);
  // a.flip();   // conver 1 to 0  and 0 to 1

  int n;
  cin >> n;
  long long shop;

  set<int> s;

  for (int i = 0; i < n; ++i) {
    cin >> shop;
    s.insert(shop);
    
  }

  int test;
  cin >> test;
  long long coin;

  while (test--) {
    cin >> coin;

    auto it = s.upper_bound(coin);

    int count = distance(s.begin(), it);

    cout << count << endl;
  }

  return 0;
}
