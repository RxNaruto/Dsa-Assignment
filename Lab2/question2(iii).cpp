#include <iostream>
#include <vector>
using namespace std;
void findUnion(int arr1[], int arr2[], int m, int n) {
    int i = 0, j = 0;
  vector<int> result;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            result.push_back(arr1[i]);
            i++;
        } else if (arr2[j] < arr1[i]) {
            result.push_back(arr2[j]);
            j++;
        } else {
            result.push_back(arr2[j]);
            i++;
            j++;
        }
    }
    while (i < m) {
        result.push_back(arr1[i]);
        i++;
    }
    while (j < n) {
        result.push_back(arr2[j]);
        j++;
    }
  cout << "Union: ";
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }
    cout << endl;
}
void findIntersection(int arr1[], int arr2[], int m, int n) {
    int i = 0, j = 0;
   vector<int> result;

    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr2[j] < arr1[i]) {
            j++;
        } else {
            result.push_back(arr2[j]);
            i++;
            j++;
        }
    }
    cout << "Intersection: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
 cout << endl;
}
int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int arr2[] = {3, 6, 7};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    findUnion(arr1, arr2, m, n);
    findIntersection(arr1, arr2, m, n);

    return 0;
}