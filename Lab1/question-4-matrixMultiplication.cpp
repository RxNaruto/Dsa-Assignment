#include<iostream>
using namespace std;
int main()
{
     int arr1[10][10];
    cout<<"Enter the elements of first array"<<endl;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cout<<"row "<<i+1<<" column "<<j+1<<endl;
            cin>>arr1[i][j];
        }
    }
   
    int arr2[10][10];
     cout<<"Enter the elements of second array"<<endl;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cout<<"row "<<i+1<<" column "<<j+1<<endl;
            cin>>arr2[i][j];
        }
    }
    int arr3[10][10]={0};
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            for(int k=0;k<10;k++){
                arr3[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    cout<<"The element of third array are"<<endl;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
 return 0;
}