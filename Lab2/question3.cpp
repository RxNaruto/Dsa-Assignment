#include<iostream>
#include<vector>
using namespace std;

void MaxandMin(int arr[],int size){
    int max=arr[0],min=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        else if(arr[i]<min){
            min=arr[i];
        }

    }
    cout<<"The max element is "<<max<<endl;
    cout<<"The min element is "<<min<<endl;
}

int main()
{  
    int arr[5]={1,0,1,2,0};
   MaxandMin(arr,5);

    
  
 return 0;
}