#include <iostream>
using namespace std;
void insertionSort(int arr[], int n) {
    int i,j,ele;
    for (i=1;i<n;i++) {
        ele=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>ele){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=ele;
    }
}
int main() {
    int arr[]={5, 2, 4, 6, 1, 3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Original array: ";
    for (int i=0;i<n;i++) {
        cout<<arr[i] << " ";
    }
    cout<<endl;
    insertionSort(arr,n);
    cout << "Sorted array: ";
    for (int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}