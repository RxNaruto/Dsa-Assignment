#include<iostream>
using namespace std;
int prime(int n){
    int count=0;
    for(int i=0;i<=n;i++){
        if(n%i==0){
            count++;
        }}
    if(count!=2){
        return -1;
    }
    return 1;
}
int main()
{
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    cout<<"The number is "<<prime(n);
 return 0;
}