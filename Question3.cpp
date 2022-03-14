#include<iostream>
using namespace std;

namespace n1{
    int a=5;
    void fun(){
        cout<<"yoyo";
    }
}

namespace n2{
    int a=-5;
    void fun(){
        cout<<"nonono";
    }
}

int main(){
    cout<<n1::a<<endl;
    cout<<n2::a<<endl;
    n1::fun();
    cout<<endl;
    n2::fun();
    return 0;
}