
#include<iostream>
using namespace std;
void append(int arr[],int size,int n){
    arr[size-1]=n;
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[6]={1,2,3,4,5};
    printArray(arr,6);
    append(arr,6,10);
    printArray(arr,6);

 return 0;
}