#include <iostream>
#include <cstdlib>
#include <time.h>
#include <chrono>
using namespace std;
using namespace std::chrono;

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high- 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void generateRandomArray(int arr[], int n, int range) {
    srand(time(0));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % range + 1;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[100000];
    int n = sizeof(arr)/sizeof(arr[0]);
    int range1 = 100;
    int range2 = 10000000;
    generateRandomArray(arr, n, range1);
    cout << "Original array with elements from range [1, " << range1 << "]: " << endl;
    auto start = high_resolution_clock::now();
    quickSort(arr, 0, n-1); 
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by quicksort for range1 [1, " << range1 << "]: "
         << duration.count() << " microseconds" << endl;
         generateRandomArray(arr, n, range2);
    cout << "Original array with elements from range [1, " << range2 << "]: " << endl;
    auto start1 = high_resolution_clock::now();
    quickSort(arr, 0, n-1); 
    auto stop1 = high_resolution_clock::now();
    auto duration1 = duration_cast<microseconds>(stop1 - start1);
    cout << "Time taken by quicksort for range1 [1, " << range2 << "]: "
         << duration1.count() << " microseconds" << endl;

         cout << "Difference in time taken: " << abs(duration.count() - duration1.count()) << " microseconds" << endl;

    return 0;
}