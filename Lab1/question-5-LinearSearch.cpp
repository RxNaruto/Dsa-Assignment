#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int size){
    for(int i=0;i<size;i++){
        if(arr[i]==n){
            return i;
        }
    }
    return -1;
    
}
int main()
{
    int arr[5]={1,2,3,4,5};
    cout<<"The Element is present at index "<<linearSearch(arr,4,5);
    
 return 0;
}
