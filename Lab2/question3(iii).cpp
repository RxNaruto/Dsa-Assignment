#include <iostream>
#include <vector>

using namespace std;

vector<int> findDuplicates(int arr[], int size) {
    vector<int> duplicates;
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            duplicates.push_back(arr[i]); 
        }
    }
    return duplicates;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5, 6, 6, 7, 7}; 
    int size = sizeof(arr) / sizeof(arr[0]); 

    vector<int> result = findDuplicates(arr, size);

    if (!result.empty()) {
        cout << "Duplicates in the array: ";
        for (int num : result) {
            cout << num << " ";
        }
        cout << endl;
    } else {
        cout << "No duplicates found." << endl;
    }

    return 0;
}
