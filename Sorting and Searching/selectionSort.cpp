#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENter the size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int temp =arr[j];
            if(arr[j]<arr[i]){
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
        
    }
 return 0;
}