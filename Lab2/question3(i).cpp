#include <iostream>
#include <vector>
using namespace std;
int singleElement(int arr[], int size) {
    int maxel = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxel) {
            maxel = arr[i]; 
        }
    }
    vector<int> arr2(maxel + 1, 0);
    int val;
    for (int i = 0; i < size; i++) {
        val = arr[i];
        arr2[val]++; 
    }
    for (int i = 0; i <= maxel; i++) {
        if (arr2[i] == 1) {
            return i; 
        }
    }
    return -1; 
}
int main() {
    int arr[] = {3, 2, 2, 3, 4, 4, 5, 6, 6, 7, 7}; 
    int size = sizeof(arr) / sizeof(arr[0]); 

    int result = singleElement(arr, size);

    if (result != -1) {
        cout << "Single element: " << result << endl;
    } else {
        cout << "No single element found." << endl;
    }
    return 0;
}
