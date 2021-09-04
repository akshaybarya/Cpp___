//Program to compare two numbers
#include<iostream>

using namespace std ;

int main()
{
    int a,b;
    cout<<"Enter numbers"<<endl;
    cin>>a>>b;

    if(a>b)
    {
        cout<<a<<">"<<b<<endl;
    }
    else if(a<b)
    {
        cout<<a<<"<"<<b<<endl;
    }
    else{
        cout<<"Both numbers are equal"<<endl;
    }
return 0 ;
}
