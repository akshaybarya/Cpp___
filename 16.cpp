#include <iostream>

using namespace std;

struct  s1{
int x ;
int y;

void m()
{
y=x*x;
}
void display(){
cout<<"square:"<<y<<endl;
}
}s;

int main()
{
    cout<<"Enter no";
    cin>>s.x;

    s.m();
    s.display();
    return 0 ;


}
