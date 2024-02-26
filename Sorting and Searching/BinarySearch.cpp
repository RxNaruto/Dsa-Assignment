#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int x){
    int s=0;
    int e=size;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]<x){
            s=mid;

        }
        else{
            e=mid-1;
        }
    }
    return -1;
}
int main()
{
    int arr[5]={1,2,56,67,444};
    cout<<"The number 56 is present at"<<binarySearch(arr,5,56);
 return 0;
}