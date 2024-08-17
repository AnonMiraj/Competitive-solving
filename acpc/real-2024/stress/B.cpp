
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    int q;
    cin >> q;
    
    while (q--) {
        int l, r;
        cin >> l >> r;
        l--; r--;
        
        int a=arr[l];
        for(int i=l;i<=r;i++)
        {
          a&=arr[i];
        }
         int b=(1>>24)-1;
        for(int i=0;i<n;i++)
        {
          if(i>=l&&r>=i)
             continue;
          b&=arr[i];
        }       
        if(l==0&&r==n-1)
          b=0;
        
        if (a==b) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
