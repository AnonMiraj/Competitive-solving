
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <set>

using namespace std;

string solve1(int n, const vector<int>& a, const vector<int>& b, int m, const vector<int>& d) {
    vector<int> a_copy = a; // Work on a copy to avoid modifying original input
    map<int, int> mar;
    int pm = 0;
    for (int i = 0; i < m; i++) {
        mar[d[i]]++;
        pm = d[i];
    }
    if (find(b.begin(), b.end(), pm) == b.end()) {
        return "NO";
    }

    for (int i = 0; i < n; i++) {
        while (a_copy[i] != b[i]) {
            if (mar[b[i]]) {
                mar[b[i]]--;
                a_copy[i] = b[i];
            } else {
                return "NO";
            }
        }
    }
    return "YES";
}

string solve2(int n, const vector<int>& a, const vector<int>& b, int m, const vector<int>& c) {
        set<int> ns;
        for (auto &i: b) ns.insert(i);
        map<int, int> mp;
        bool flag = true;
        for (auto &i : c) mp[i]++;
        for (int i = 0;i < n;i++)
        {
            if (a[i] != b[i])
            {
                if (mp[b[i]] == 0)
                {
                    flag = false;
                    break;
                }
                mp[b[i]]--;
            }
        }
        if (!flag) {
            return "NO";
        }
        if (ns.find(c[m - 1]) != ns.end())
            return "YES";
        else 
            return "NO";}

void generate_random_test(int& n, vector<int>& a, vector<int>& b, int& m, vector<int>& d) {
    n = rand() % 10 + 1; // Small n for easy debugging, change to a larger number for stress testing
    a.resize(n);
    b.resize(n);
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 10;
        b[i] = rand() % 10;
    }
    m = rand() % 10 + 1; // Number of operations
    d.resize(m);
    for (int i = 0; i < m; i++) {
        d[i] = rand() % 10;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    srand(time(0)); // Seed the random number generator

    int t = 100; // Number of test cases
    while (t) {
        int n, m;
        vector<int> a, b, d;
        generate_random_test(n, a, b, m, d);

        string result1 = solve1(n, a, b, m, d);
        string result2 = solve2(n, a, b, m, d);

        if (result1 != result2) {
            cout << "Mismatch found!" << endl;
            cout << "solve1: " << result1 << endl;
            cout << "solve2: " << result2 << endl;
            cout << "Input was:" << endl;
            cout << "n = " << n << endl;
            cout << "a = ";
            for (int x : a) cout << x << " ";
            cout << endl;
            cout << "b = ";
            for (int x : b) cout << x << " ";
            cout << endl;
            cout << "m = " << m << endl;
            cout << "d = ";
            for (int x : d) cout << x << " ";
            cout << endl;
            return 1;
        }
    }

    cout << "All tests passed!" << endl;

    return 0;
}

