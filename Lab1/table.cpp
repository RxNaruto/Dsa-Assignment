#include<iostream>
using namespace std;
int main()
{
    float tableNumber,multiplier;
    cout<<"Enter the table number "<<endl;
    cin>>tableNumber;

    cout<<"Enter the multiplier"<<endl;
    cin>>multiplier;
     float multiplier2=multiplier;
    for(int i=1;i<=10;i++){
        
      cout<<tableNumber*multiplier2<<endl;
      multiplier2=multiplier2+multiplier;

    }
 return 0;
}