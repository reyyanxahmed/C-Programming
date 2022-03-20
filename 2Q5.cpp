#include <iostream>
using namespace std;

class A
{
    int a=10;
    public:
      A() 
      {
          cout<<a;
      }
      ~A(){} 

};

int main (){
    A obj ;

    return 0;
}