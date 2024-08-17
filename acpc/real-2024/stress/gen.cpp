#include <iostream>
#include <cstdlib>
#include <ctime>

#include  <vector>
using namespace std;

int main() {
    srand(time(NULL));


        int n=rand() % int(2e3) + 1;
        int q=rand() % int(1e3) + 1;
        vector<int> a(n);
        for(int&i:a)
          i=rand() % int(1e3) + 1;
        
        cout<<n<<"\n";
        for(int&i:a)
          cout<<i<<" ";
        cout<<"\n";
        cout<<q<<"\n";
        while(q--)
        {

        int l=rand() % n + 1;
        int r=rand() % n + l;
        r=min(r,n);
        cout<<l<<" "<<r<<"\n";


        }

    return 0;
}
