// This question is incomplete

#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main()
{
   vector<int>arr={1,0,2,1,3,0,4};

   set<int>removeDup(arr.begin(),arr.end());

   vector<int>uniqueVector(removeDup.begin(),removeDup.end());

   for(int num : arr){
    cout<<num<<" ";
   }
   cout<<endl;
   for(int num: uniqueVector){
    cout<<num<<" ";
   }

 return 0;
}