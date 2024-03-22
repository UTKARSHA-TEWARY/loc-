#include <iostream>
using namespace std;
int main()
    {
        int i;
        for(i=1;i<=100;i++)
        {
            if(i%3==0)
            {
                cout<<"fizz"<<"";
            }
            else if(i%5==0){
                cout<<"buzz"<<"";
            }
            else{
                cout <<i<<"";
            }
        }
        return 0;
        
    }