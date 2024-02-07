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
int main()
{  
    int arr[5]={1,0,1,2,0};
    cout<<singleElement(arr,5);
 return 0;
}