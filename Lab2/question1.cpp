#include<iostream>
using namespace std;
void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void insert(int arr[],int index,int size,int num){
    for(int i=size-1;i>index;i--){
        arr[i]=arr[i-1];
    }
    arr[index]=num;
}

void append(int arr[],int x){
    int i=0;
    while(arr[i]!=0){
        i++;
    }
    arr[i]=x;

}
void deletenum(int arr[],int size,int x){
    int index=0;
    for(int i=0;i<size;i++){
        if(arr[i]==x){
            index=i;
            break;
        }
    }
    for(int i=index;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    arr[size-1]=NULL;
}
int linearSearch(int arr[],int size,int x){
    for(int i=0;i<size;i++){
        if(arr[i]==x){
            return i;
            
        }
    }
    return -1;
}

int binarySearch(int arr[],int size,int x){
    int s=0,e=size;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]>x){
            e=mid-1;

        }
        else{
            s=mid+1;
        }
        
    }
    return -1;
}

int get(int arr[],int index){
    return arr[index];
}

void set(int arr[],int index,int x){
    arr[index]=x;
}

int max(int arr[],int size){
    int max=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int min(int arr[],int size){
    int min=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

void reverse(int arr[],int size){
    int j=size-1;
    if(size%2==0){
        for(int i=0;i<=(size/2);i++){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
    else{
        for(int i=0;i<(size/2);i++){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j--;
        }

    }
}
void shift(int arr[],int size){
    for(int i=size;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=0;
}

void rotate(int arr[],int size){
    int temp=arr[size-1];
    
    for(int j=size-1;j>0;j--){
        arr[j]=arr[j-1];
        
    }
    arr[0]=temp;
}
 
int main()
{
    int arr[6]={1,2,4,5,6};
    display(arr,6);
    cout<<endl;
    append(arr,100);
    display(arr,6);


 return 0;
}