#include<iostream>
using namespace std;
void insertNumber(int arr[],int n,int i,int size){
    int temp = i;
    for(int j=size;j>i;j--){
        arr[j]=arr[j-1];
    }
    arr[temp]=n;
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
    insertNumber(arr,6,3,6);
    printArray(arr,6);

    
 return 0;
}