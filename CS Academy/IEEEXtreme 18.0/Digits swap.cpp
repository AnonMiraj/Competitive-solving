#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void dfs(string& N, int K, string& maxNumber) {
  if (K == 0) {
    if (N > maxNumber) {
      maxNumber = N;  
    }
    return;
  }

  int length = N.length();

  string original = N;
  for (int i = 0; i < length; ++i) {
    char maxDigit = original[i];
    for (int j = i + 1; j < length; ++j) {
      if (N[j] > maxDigit) {
        swap(N[i], N[j]);
        if (!(N[0] == '0')) {
          dfs(N, K - 1, maxNumber);
        }
        swap(N[i], N[j]);
      }
    }
  }
}

int main() {
  string N;
  int K;

  cin >> N >> K;

  string maxNumber = N; 
  dfs(N, K, maxNumber);

  cout << maxNumber << endl;

  return 0;
}
