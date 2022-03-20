#include <iostream>
using namespace std;

namespace one
{
    int p=10,q=20;
    int z=p+q;

}

namespace two
{
    int p=10,q=30;
    int z=p+q;
}
int main()
{
    cout<<one::z<<endl;
    cout<<two::z<<endl;

    return 0;
}