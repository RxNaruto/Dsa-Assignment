#include <iostream>
using namespace std;
void findPairsWithSumKSorted(int arr[], int size, int k) {
    int left = 0; 
    int right = size - 1; 
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == k) {
            cout << "Pair with sum " << k << ": (" << arr[left] << ", " << arr[right] << ")" << endl;
            left++; 
            right--; 
        } else if (sum < k) {
            left++;
        } else {
            right--; 
        }
    }
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    int targetSum ;
    cout<<"Enter the k"<<endl;
    cin>>targetSum;
    findPairsWithSumKSorted(arr, size, targetSum);
    return 0;
}
