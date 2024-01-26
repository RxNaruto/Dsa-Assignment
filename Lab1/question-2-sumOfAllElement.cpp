#include<iostream>
using namespace std;
int sumOfAll(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=arr[i]+sum;

    }
    return sum;
}
int largestElement(int arr[],int size){
    int max=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int linearSearch(int arr[],int size,int n){
    for(int i=0;i<size;i++){
        if(arr[i]==n){
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[5]={1,220,13,34,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"The sum of array is "<<sumOfAll(arr,size)<<endl;
    cout<<"The Largest element of array is "<<largestElement(arr,size)<<endl;
    cout<<"The element 220  is at index"<<linearSearch(arr,size,220)<<endl;

 return 0;
}