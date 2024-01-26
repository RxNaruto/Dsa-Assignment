#include<iostream>
using namespace std;
int main()
{
    int arr1[5]={1,2,3,4,5};
    int arr2[4]={6,7,8,9};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int n=n1+n2;
    int arr3[n];
    
    for(int i=0;i<n1;i++){
        arr3[i]=arr1[i];
    }
    
    for(int i=0;i<n2;i++){
        arr3[n1+i]=arr2[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr3[i];
    }
 return 0;
}