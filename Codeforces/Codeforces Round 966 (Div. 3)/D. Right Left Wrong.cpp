
#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pi;
#define int long long
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define frr(i, a, b) for(int i = a; i <= b; i++)
#define Print(a) for(int i = 0; i < a.size(); i++) {cout << a[i] << " ";}
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define endl "\n"
#define YES cout << "YES\n";
#define NO cout << "NO\n";

// for (int i = 0; i < n; i++) {
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    /*
    freopen("wtf.in", "r", stdin);
    freopen("wtf.out", "w", stdout);
    */
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vi a(n);
        vi pref(n+1);
        for(int i = 0 ; i < n ; i++) {
            cin >> a[i];
        }
        string s; cin >> s;

        for(int i = 0 ; i < n ; i++) {
            pref[i+1]=a[i]+pref[i];
        }

        int res = 0;
        int r = n-1;

        for(int i = 0 ; i < n ; i++) {
            if (s[i]=='L') {
                while(r > i && s[r] != 'R') {
                    r--;
                }
                if (i<r) {
                    s[r]='.';
                    res += pref[r+1]-pref[i];
                    r--;
                } else {
                    break;
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}

