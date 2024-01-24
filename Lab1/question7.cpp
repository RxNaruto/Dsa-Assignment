#include<iostream>
using namespace std;
int largestNumber(int arr[],int size){
    int maxnum=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>maxnum){
            maxnum=arr[i];
        }

    }
    for(int i=0;i<size;i++){
        if(arr[i]==maxnum){
            return i; 
        }
    }
}

int main()
{
    int arr[5]={1,4,5,6,2};
    cout<<"Index of largest"<<largestNumber(arr,5);

 return 0;
}