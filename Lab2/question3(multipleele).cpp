#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> multipleElements(int arr[], int size) {
    unordered_map<int, int> frequencyMap;
    for (int i = 0; i < size; i++) {
        frequencyMap[arr[i]]++; 
    }

    vector<int> result;
    for (auto& pair : frequencyMap) {
        if (pair.second == 2) {
            result.push_back(pair.first); 
        }
    }
    return result;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5, 6, 6, 7, 7}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    vector<int> result = multipleElements(arr, size);
    if (!result.empty()) {
        cout << "Elements occurring twice: ";
        for (int num : result) {
            cout << num << " ";
        }
        cout << endl;
    } else {
        cout << "No elements occurring twice found." << endl;
    }
    return 0;
}
