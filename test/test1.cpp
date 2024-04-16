#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

vector<pair<int, int>> findPairsWithSumK(int arr[], int size, int k) {
    unordered_set<int> complementSet;
    vector<pair<int, int>> pairs;

    for (int i = 0; i < size; i++) {
        int complement = k - arr[i];
        if (complementSet.find(complement) != complementSet.end()) {
            // Found a pair with sum k
            pairs.push_back({arr[i], complement});
        }
        complementSet.insert(arr[i]); // Add current element to the set
    }

    return pairs;
}

int main() {
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int targetSum = 6; // Target sum

    vector<pair<int, int>> result = findPairsWithSumK(arr, size, targetSum);

    if (!result.empty()) {
        cout << "Pairs with sum " << targetSum << ":" << endl;
        for (auto& pair : result) {
            cout << "(" << pair.first << ", " << pair.second << ")" << endl;
        }
    } else {
        cout << "No pairs found with sum " << targetSum << endl;
    }

    return 0;
}
