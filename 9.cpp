#include<iostream>

using namespace std;

int main()
{
    int n,a,b;
    cout<<"Enter numbers"<<endl;
    cin>>a>>b;
    cout<<"Enter 1 for addition 2 for subtraction 3 for multiply and 4 for divide"<<endl;
    cin>>n;

    switch(n)
    {
            case(1):cout<<a+b;
            break;
            case(2):cout<<a-b;
            break;
            case(3):cout<<a*b;
            break;
            case(4):cout<<a/b;
                   break;
            }

    return 0;
}
