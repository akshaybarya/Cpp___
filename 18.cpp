#include<iostream>

using namespace std;

int swap(int &a, int &b)
{
    int temp=b;
    b=a;
    a=temp;
    cout<<"After swapping"<<endl;
    cout<<"a :"<<a<<endl;
    cout<<"b :"<<b<<endl;
    return a,b;
}

int main()
{
    int a,b;
    cout<<"Enter a and b";
    cin>>a>>b;

    cout<<"Before swapping"<<endl;
    cout<<"a :"<<a<<endl;
    cout<<"b :"<<b<<endl;

    swap(a,b);

    cout<<"After swapping"<<endl;
    cout<<"a :"<<a<<endl;
    cout<<"b :"<<b<<endl;
    return 0;
}
