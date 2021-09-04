#include<iostream>

using namespace std;

class Swap
{
   private:
     int p,q;

   public:
     void setvalue(int a,int b)
     {
         p=a;
         q=b;
     }
     void swap()
     {
         int temp = p;
         p=q;
         q=temp;
         cout<<"After swapping"<<endl;
         cout<<"a= "<<p<<endl;
         cout<<"b="<<q;
     }
};

int main()
{
Swap obj;
   int a , b;
   cout<<"Enter Numbers"<<endl;
   cin>>a>>b;

    obj.setvalue(a,b);
    obj.swap();
   return 0;
}
