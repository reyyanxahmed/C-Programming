#include<iostream>
using namespace std;

class Easy
{
    private:
      float fake,pic;
    public :
    void setcomplex(float,float);
    void displaycomplex();
    void displaysum(Easy a,Easy b);


};

void Easy::setcomplex(float r,float i)
{
    fake=r;
    pic=i;
}

void Easy::displaycomplex()
{
    cout<<fake<<" + i"<<pic<<endl;
}

void Easy ::displaysum(Easy a,Easy b)
{
    cout<<"The sum of the two Complex Numbers is :"<<a.fake+b.fake<<"+ i"<<a.pic+b.pic<<endl;
}

int main ()
{
    Easy a,b,c;
    a.setcomplex(26.4,9.9);
    b.setcomplex(5.5,7.5);
    a.displaycomplex();
    b.displaycomplex();

    c.displaysum(a,b);

    return 0;
}