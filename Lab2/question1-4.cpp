#include<iostream>
using namespace std;
void deleteArr(int arr[],int x,int size){
    int eltodel=0;
    for(int i=0;i<size;i++){
        if(arr[i]==x){
            eltodel=i;
            break;

        }
    }
    for(int j=eltodel;j<size;j++){
        arr[j]=arr[j+1];
    }
     arr[size-1]=NULL;
    

}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
         cout<<arr[i]<<" ";
      
        }
       
    
    cout<<endl;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    printArray(arr,5);
    deleteArr(arr,3,5);
    printArray(arr,5);
 return 0;
}