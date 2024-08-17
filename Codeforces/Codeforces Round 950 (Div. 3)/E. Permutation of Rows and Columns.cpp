// ﷽
// Contest: Codeforces Round 950 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1980/problem/E
// Memory Limit: 256
// Time Limit: 3000
// Start: Mon 03 Jun 2024 07:43:49 PM EEST
// Reading Time : 
// Thinking Time : 
// Coding Time : 
// Comments : 
#include<bits/stdc++.h>

#ifdef ALGOAT
#include "debug.hpp"
#else
#define debug(...) 0
#define debug_itr(...) 0
#define debug_bits(...) 0
#endif

// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);


using namespace std;

// Function to get row signatures
vector<unordered_map<int, int>> getRowSignatures(const vector<vector<int>>& matrix, int n, int m) {
    vector<unordered_map<int, int>> rowSignatures(n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            rowSignatures[i][matrix[i][j]]++;
        }
    }
    return rowSignatures;
}

// Function to get column signatures
vector<unordered_map<int, int>> getColumnSignatures(const vector<vector<int>>& matrix, int n, int m) {
    vector<unordered_map<int, int>> columnSignatures(m);
    for (int j = 0; j < m; ++j) {
        for (int i = 0; i < n; ++i) {
            columnSignatures[j][matrix[i][j]]++;
        }
    }
    return columnSignatures;
}

bool canTransform(vector<vector<int>>& a, vector<vector<int>>& b, int n, int m) {
    auto rowSignaturesA = getRowSignatures(a, n, m);
    auto rowSignaturesB = getRowSignatures(b, n, m);

    auto columnSignaturesA = getColumnSignatures(a, n, m);
    auto columnSignaturesB = getColumnSignatures(b, n, m);

    // Sort and compare row signatures
    sort(rowSignaturesA.begin(), rowSignaturesA.end());
    sort(rowSignaturesB.begin(), rowSignaturesB.end());
    if (rowSignaturesA != rowSignaturesB) {
        return false;
    }

    // Sort and compare column signatures
    sort(columnSignaturesA.begin(), columnSignaturesA.end());
    sort(columnSignaturesB.begin(), columnSignaturesB.end());
    if (columnSignaturesA != columnSignaturesB) {
        return false;
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> a(n, vector<int>(m));
        vector<vector<int>> b(n, vector<int>(m));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> a[i][j];
            }
        }

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> b[i][j];
            }
        }

        if (canTransform(a, b, n, m)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
