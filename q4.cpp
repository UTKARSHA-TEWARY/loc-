#include <iostream>
using namespace std;
int main()
{
    int a,b,ch;
    cout<<"Enter two number:";
    cin>>a>>b;
    cout<<"enter 1 for addition, 2 for substraction ,3 for multiplication,4for division and 5 for modulus";
    cout<<"Enter your choice:";
    cin>>ch;
    switch(ch)
    {
        case 1:
        {
            cout<<"addition:"<<a+b;
        }
        break;
        case 2:
        {
            cout<<"substraction:"<<a-b;
        }
        break;
        case 3:
        {
            cout<<"multiplication:"<<a*b;
        }
        break;
        case 4:
        {
            cout<<"division:"<<a/b;
        }
        break;
        case 5:
        {
            cout<<"modulus:"<<a%b;
        }
        break;
        default:
        cout<<"wrong choice" ;  }
} 
