#include<iostream>
using namespace std;
int arraySorted(int arr[],int size){
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            return -1;
        }
    }
    return 1;
}
int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i<<" ";
        cin>>arr[i];
    }
    cout<<arraySorted(arr,5);
 return 0;
}