#include<iostream>
using namespace std;
int smallestPN(int goal){
    int sum = 0;
    int i=0;
    while(sum<goal){
        sum=sum+i;
    if(sum>=goal){
        return i;
    }
    else{
        i++;
    }

    }
    
}
int main()
{
    int goal;
    cout<<"Enter the goal"<<endl;
    cin>>goal;
    cout<<"The smallest postive number is"<<smallestPN(goal)<<endl;

 return 0;
}