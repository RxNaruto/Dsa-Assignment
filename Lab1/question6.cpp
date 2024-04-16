#include<iostream>
using namespace std;
void reverseArray(int arr[],int size){
    int j=size-1;
    if(size%2==0){
        for(int i=0;i<=(size/2);i++){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
    else{
        for(int i=0;i<(size/2);i++){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j--;
        }

    }
}
int main()
{
    int arr[5]={1,2,3,4,5};
    reverseArray(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
 return 0;
}