#include<iostream>
using namespace std;
int sumofNumbers(int first,int last){
    int sum=0;
    for(int i=first;i<=last;i++){
        sum=sum+i;

    }
    return sum;
}
int main()
{ 
    int first,last;
    cout<<"Enter First "<<endl;
    cin>>first;
    cout<<"Enter last"<<endl;
    cin>>last;
    cout<<"The sum from first and last is "<<sumofNumbers(first,last);

 return 0;
}