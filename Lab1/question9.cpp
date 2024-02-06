#include<iostream>
using namespace std;
void overlapping(int arr[],int size,int i){
    for(int j=i;j<size-1;j++){
        arr[j]=arr[j+1];
    }
    arr[size-1]=0;
}
void removingDuplicates(int arr[],int& size){
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;){
            if (arr[j]==arr[i]){
                overlapping(arr,size,j);
                size--;
            } else{
                j++;
            }
        }
    }
}

int main(){
    int arr[7]={1,2,0,1,3,1,2};
    int size=7;
    removingDuplicates(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
