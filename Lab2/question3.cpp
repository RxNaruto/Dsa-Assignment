#include<iostream>
#include<vector>
using namespace std;
int max(int arr[],int size){
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int singleElement(int arr[],int size){
    int maxel=max(arr,size);
    vector<int> arr2(maxel, 0);
    int val;
    for(int i=0;i<size;i++){
        val=arr[i];
        arr2[val]=arr2[val]+1;

    }
    for(int i=0;i<maxel;i++){
        if(arr2[arr[i]]==1){
            return i;
        }
    }
}

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
    
  
 return 0;
}