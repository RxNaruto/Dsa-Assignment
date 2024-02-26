#include<iostream>
using namespace std;
int linearSearch(int arr[],int size,int x){
    for(int i=0;i<size;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}
void inputArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
int main()
{
    int n,x;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    inputArray(arr,n);
    cout<<"Enter the number you want to find "<<endl;
    cin>>x;
    cout<<"The number you want to accessing is at"<<linearSearch(arr,5,x);
    
 return 0;
}