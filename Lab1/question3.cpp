#include<iostream>
using namespace std;
int gcd(int n1,int n2){
    int gcd;
    for(int i=0;i<=n1 && i<=n2;i++){
        if(n1%i==0 && n2%i==0){
            gcd=i;
        }
    }
    return gcd;
}
int main()
{
    int n1,n2;
    cout<<"Enter the number 1 and number 2"<<endl;
    cin>>n1>>n2;
    cout<<"The gcd is "<<gcd(n1,n2);
 return 0;
}