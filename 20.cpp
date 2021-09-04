#include<iostream>

using namespace std;

class Foo{
public :
void m(int a,int b)
{
    int sum=a+b;
    cout<<"Sum : "<<sum<<endl;
}
};

int main()
{
    Foo f;
    int a,b;
    cout<<"Enter numbers : "<<endl;
    cin>>a>>b;

    f.m(a,b);

    return 0;
}
