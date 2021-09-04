#include<iostream>

using namespace std;

int main()
{
    int  a=100;

    cout<<"value of a :"<<a<<endl;

    int &ref = a;
    cout<<"Value of ref :"<<ref<<endl;

    ref=200;
    cout<<"value of a :"<<a<<endl;
    cout<<"value of ref :"<<ref<<endl;
    return 0;
}
