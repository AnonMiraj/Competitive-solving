#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));


        int x = rand() % 200 + 1; // Generate a random value for x between 1 and 2000
        int y = rand() % 200 + 1; // Generate a random value for y between 1 and 2000
        int z = rand() % 200 + 1; // Generate a random value for z between 1 and 2000
        int k = rand() % (x * y * z) + 1; // Generate a random value for k between 1 and x*y*z

        cout<<1<<endl;
        cout << x << " " << y << " " << z << " " << k << endl;

    return 0;
}
