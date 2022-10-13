#include <iostream>
using namespace std;
int n;
int st[100];
int top = -1;

bool isEmpty()
{
    if(top==-1)
    return true;
    else
    return false;
}
bool isFull()
{
    if(top==n-1)
    return true;
    return false;
}

void push()
{
    int n;
    if(isFull())
    {
        cout<<"STACK IS FULL !! OVERFLOW!!"<<endl;
        return;
    }
    cout << "Enter number to be inserted: " << endl;
    cin >> n;
    top++;
    st[top] = n;
}
void pop()
{
    if(isEmpty())
    {
        cout<<"Stack is empty! UNDERFLOW! Can't POP!!"<<endl;
        return;
    }
    cout << "Popped " << st[top]<<endl;
    top--;
}

void print()
{
    cout << "-----THE STACK-----" << endl;
    for (int i = top; i >= 0; i--)
    {
        cout << st[i] << endl;
    }
}
int main()
{
    cout<<"Enter the limit of the Stack"<<endl;
    cin>>n;
    int ch;
    while (true)
    {
        cout << "Enter:\n1: to push\n2: to pop\n3: to print the stack" << endl;
        cin >> ch;
        switch (ch)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                print();
                break;
            default:
                exit(0);
                break;
        }
    }
}