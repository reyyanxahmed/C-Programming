#include<iostream>
using namespace std;
int x=20; 
class A
{
    int a;
    static int b;
    public:
      void display();

};

void A::display()
{
    cout<<a;
}
int A::b=2;
int main ()
{
    int x=10;
    cout<<::x<<endl;
    std::cout<<"Hello";
}