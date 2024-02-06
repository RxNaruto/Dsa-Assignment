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

void deleteElement(int arr[],int size,int element){
    int elementToDelete=0;
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            elementToDelete=i;

            
        }
        for(int i=elementToDelete;i<size;i++){
            arr[i]=arr[i+1];
        }
    }
}

int linearSearch(int arr[],int size, int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return i;
        }
        else{
            return -1;
        }
    }
}

int binarysearch(int arr[],int size,int element){
    int s=0;
    int e=size-1;
    int mid;
    while(mid=(s+e)/2){
        
    }

}


int main()
{

    int arr[6]={1,2,3,4,5};

 return 0;
}