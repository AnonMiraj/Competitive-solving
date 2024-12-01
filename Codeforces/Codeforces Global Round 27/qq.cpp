#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Function to check if number contains only 3s and 6s
bool containsOnly3sAnd6s(long long num) {
    string numStr = to_string(num);
    for(char c : numStr) {
        if(c != '3' && c != '6') return false;
    }
    return true;
}

// Function to check if number has exactly n digits
bool hasNDigits(long long num, int n) {
    string numStr = to_string(num);
    return numStr.length() == n;
}

// Function to find smallest number for given length n
long long findSmallestNumber(int n) {
    if(n <= 0) return -1;
    
    long long num = 0;
    // Start with smallest n-digit number containing only 3s and 6s
    string smallest(n, '3');
    num = stoll(smallest);
    
    // Keep incrementing until we find a valid number
    while(true) {
        if(containsOnly3sAnd6s(num) && num % 66 == 0) {
            return num;
        }
        // Generate next number with only 3s and 6s
        string numStr = to_string(num);
        int i = numStr.length() - 1;
        while(i >= 0 && numStr[i] == '6') {
            numStr[i] = '3';
            i--;
        }
        if(i < 0) break;
        numStr[i] = '6';
        num = stoll(numStr);
    }
    return -1;  // If no solution found
}

int main() {
    cout << "Numbers with only 3s and 6s divisible by 66 for lengths 1 to 10:" << endl;
    for(int n = 1; n <= 10; n++) {
        long long result = findSmallestNumber(n);
        if(result != -1) {
            cout << "Length " << n << ": " << result << endl;
        } else {
            cout << "Length " << n << ": No solution exists" << endl;
        }
    }
    return 0;
}
