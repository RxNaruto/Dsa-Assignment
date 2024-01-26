#include<iostream>
using namespace std;
int main()
{
    int arr1[2][2]={{1,2},{3,4}};
    int arr2[2][2]={{1,1},{1,1}};
    int sumArr[2][2];
    int subArr[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            sumArr[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            subArr[i][j]=arr1[i][j]-arr2[i][j];
        }
    }
    cout<<"The sum of two array is "<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<sumArr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The subtraction of two array is"<<endl;

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<subArr[i][j]<<" ";
        }
        cout<<endl;
    }

 return 0;
}