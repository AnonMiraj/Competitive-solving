
#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

// Function to generate prime factors of a number
std::vector<int> primeFactors(int n) {
    std::vector<int> v;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            v.push_back(i);
            n /= i;
        }
    }
    if (n != 1) {
        v.push_back(n);
    }
    return v;
}

// Function to generate all subsets of prime factors
void generateSubsets(const std::vector<int>& factors, int index, std::vector<int>& currentSubset, std::vector<std::vector<int>>& allSubsets) {
    if (index == factors.size()) {
        if (!currentSubset.empty()) {
            allSubsets.push_back(currentSubset);
        }
        return;
    }
    generateSubsets(factors, index + 1, currentSubset, allSubsets); // Exclude current factor
    currentSubset.push_back(factors[index]);
    generateSubsets(factors, index + 1, currentSubset, allSubsets); // Include current factor
    currentSubset.pop_back();
}

// Helper function to check if two subsets are disjoint
bool areDisjoint(const std::vector<int>& subset1, const std::vector<int>& subset2) {
    std::unordered_set<int> set(subset1.begin(), subset1.end());
    for (int elem : subset2) {
        if (set.find(elem) != set.end()) {
            return false;
        }
    }
    return true;
}

// Function to compute the product of elements in a subset
int productOfSubset(const std::vector<int>& subset) {
    int product = 1;
    for (int num : subset) {
        product *= num;
    }
    return product;
}

// Main function to find all unique pairs of disjoint subsets and their products
void findUniquePairs(const std::vector<int>& factors) {
    std::vector<std::vector<int>> allSubsets;
    std::vector<int> currentSubset;
    generateSubsets(factors, 0, currentSubset, allSubsets);
    
    std::cout << "Unique pairs of disjoint subsets of prime factors and their products are:\n";
    for (size_t i = 0; i < allSubsets.size(); ++i) {
        for (size_t j = i + 1; j < allSubsets.size(); ++j) {
            if (areDisjoint(allSubsets[i], allSubsets[j])) {
                int product1 = productOfSubset(allSubsets[i]);
                int product2 = productOfSubset(allSubsets[j]);
                std::cout << "{ ";
                for (int num : allSubsets[i]) {
                    std::cout << num << " ";
                }
                std::cout << "} and { ";
                for (int num : allSubsets[j]) {
                    std::cout << num << " ";
                }
                std::cout << "} => Products: " << product1 << ", " << product2 << "\n";
            }
        }
    }
}

int main() {
    int n = 1e9+1221314; // Example number
    std::vector<int> factors = primeFactors(n);
    findUniquePairs(factors);
    return 0;
}

