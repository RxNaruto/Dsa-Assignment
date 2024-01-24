#include<iostream>
using namespace std;
void movearray(int arr[],int size){
    int temp=arr[size-1];
    
    for(int j=size-1;j>0;j--){
        arr[j]=arr[j-1];
        
    }
    arr[0]=temp;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    movearray(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }

 return 0;
}