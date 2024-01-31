#include<iostream>
using namespace std;

void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void append(int arr[],int size,int num){
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            arr[i]=num;
            break;
        }
        else{
            cout<<"No empty space in array"<<endl;
        }
    }
}
void insertElement(int arr[],int index,int num,int size){
    for(int i=size-2;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=num;
}


int main()
{

    int arr[6]={1,2,3,4,5};

 return 0;
}