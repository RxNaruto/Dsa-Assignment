#include<iostream>
using namespace std;
void englishName(){
    for(int i=1;i<=9;i++){
        switch (i)
        {
        case 1:
            cout<<"One"<<endl;
            break;
        case 2:
            cout<<"Two"<<endl;
            break;
        case 3:
            cout<<"Three"<<endl;
            break;
        case 4:
            cout<<"Four"<<endl;
            break;
        case 5:
            cout<<"Five"<<endl;
            break;
        case 6:
            cout<<"Seven"<<endl;
            break;
        case 8:
            cout<<"Eight"<<endl;
            break;
        case 9:
            cout<<"Nine"<<endl;
            break;
        }
    }
}
int main()
{
    englishName();
    
 return 0;
}