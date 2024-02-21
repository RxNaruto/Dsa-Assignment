#include<iostream>
using namespace std;
int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*fact(n-1);
}
int ncr(int n,int r){
    if(r==0 || r==n){
        return 1;
    }
    return (fact(n)/(fact(r)*fact(n-r)));
}
int main() {
    cout << "The ncr of 5 and 2 is " << ncr(5, 2) << endl;
    return 0;
}
