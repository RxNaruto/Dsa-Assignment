#include <iostream>
using namespace std;

void findPairsWithSumK(int arr[], int size, int k) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == k) {
                cout << "Pair with sum " << k << ": (" << arr[i] << ", " << arr[j] << ")" <<endl;
            }
        }
    }
}

int main() {
    int arr[] = {3, 1, 4, 1, 5, 0, 2, 0, 9, 2}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    int targetSum;
    cout<<"Enter the value of k"<<endl;
    cin>>targetSum;

    findPairsWithSumK(arr, size, targetSum);

    return 0;
}
