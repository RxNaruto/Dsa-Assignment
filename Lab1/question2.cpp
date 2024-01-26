
#include<iostream>
using namespace std;
int smPos(int goal){
    int count=0,i=1;
    while(count<goal){
        count=count+i;
        if(count<=goal){
            i++;
        }
       
    }
    return i-1;
}
int main()
{
    int goal;
    cout<<"Enter the goal"<<endl;
    cin>>goal;
    cout<<"The smallest positive integer is "<<smPos(goal);
 return 0;
}