// Memory Limit: 256
// Time Limit: 1000
// Start: 2024-03-30
// Comments :

#include <algorithm>
#include <climits>
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <pthread.h>
#include <random>
#include <set>
#include <string>
#include <vector>

#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

using namespace std;

int solve(string s) {
  vector<int> freq(26, 0);
  int currentStrength = 0;
  int targetstrength = 0;
  int ans = 0;
  size_t anssize = s.size();
  for (size_t i = 0; i < s.size(); i++) {
    if (!freq[s[i] - 'a']) {
      freq[s[i] - 'a']++;
      targetstrength++;
    }
  }
  freq.assign(26, 0);
  size_t l = 0, r = 0;
  while (r != s.size()) {
    freq[s[r] - 'a']++;
    if (freq[s[r] - 'a'] == 1) {
      currentStrength++;
    }
    r++;
    while (currentStrength == targetstrength) {
      ans++;

      freq[s[l] - 'a']--;
      if (!freq[s[l] - 'a']) {
        currentStrength--;
      }
      if (r - l < anssize) {
        anssize = r - l;
        ans = 1;
      }
      l++;
    }
  }
  return ans;
}
int solve2(string s) {
  set<char> a;
  for (size_t i = 0; i < s.size(); i++) {
    a.insert(s[i]);
  }
  int f[26]{};
  int mnsz = INT_MAX;
  vector<int> v(s.size() + 1, 0);
  int left = 0;
  int cnt = 0;
  for (int right = 0; right < s.size(); ++right) {
    if (!f[s[right] - 'a']) {
      cnt++;
    }
    while (f[s[left] - 'a'] > 1) {
      f[s[right] - 'a']--;
      left++;
    }
    if (cnt == a.size()) {
      mnsz = min(mnsz, right - left + 1);
      v[right - left + 1]++;
    }
  }
  return v[mnsz];
}

std::string gen_random(const int len) {

  static const char alphanum[] = "0123456789"
                                 "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                                 "abcdefghijklmnopqrstuvwxyz";
  std::string tmp_s;
  tmp_s.reserve(len);

  for (int i = 0; i < len; ++i) {
    tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
  }

  return tmp_s;
}
int main() {
  fastio();
  std::random_device rd;
  std::mt19937 mt(rd());

  int zans = 0, eans = 0;
  int ma = 100;
  int n;
  while (true) {

    n = rand() % ma + 10;
    string s = "abba";

    eans = solve(s);
    zans = solve2(s);
    cout << s << "\n";
    cout << eans << "\n";
    cout << zans << "\n";
    return 0;
  }

  return 0;
}
