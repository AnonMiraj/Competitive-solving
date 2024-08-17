#include <algorithm>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int pixels[21][21] = {};
void writePPM() {
  ofstream ppmFile("output.ppm");
  ppmFile << "P1" << endl;
  ppmFile << 21 << " " << 21 << endl;

  for (size_t i = 0; i < 21; i++) {
    for (size_t j = 0; j < 21; j++) {
      cin >> pixels[i][j];
    }
  }

  for (size_t i = 0; i < 21; i++) {
    for (size_t j = 0; j < 21; j++) {
      ppmFile << !pixels[i][j] << " ";
    }
    ppmFile << endl;
  }

  ppmFile.close();
}

void solve() {

  for (size_t i = 0; i < 21; i++) {
    for (size_t j = 0; j < 21; j++) {
      cin >> pixels[i][j];
    }
  }
  writePPM();
}

int main() {
  // freopen("input.txt", "r", stdin);
  // freopen("output.ppm", "w", stdout);

  int n = 1;
  // cin >> n;
  while (n--)
    solve();
  return 0;
}
