#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length,breath;
    public:
    Rectangle(int l , int b){
        length = l;
        breath = b;
    }
    void Area(){
        cout<<"The area of rectangle is "<<length*breath<<endl;
    }
    void Perimeter(){
        cout<<"The perimeter of rectangle is "<<2*(length+breath)<<endl;
    }
};
int main()
{
    Rectangle r1(3,6);
    Rectangle r2(2,5);
    r1.Area();
    r1.Perimeter();
    r2.Area();
    r2.Perimeter();
 return 0;
}